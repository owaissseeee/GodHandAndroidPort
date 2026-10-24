#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002F2898
// Address: 0x2f2898 - 0x2f29e0
void func_002F2898_0x2f2898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2898_0x2f2898");
#endif

    switch (ctx->pc) {
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f29c0u: goto label_2f29c0;
        default: break;
    }

    ctx->pc = 0x2f2898u;

    // 0x2f2898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f289c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f28a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f28a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f28a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f28ac: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f28acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f28b0: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2f28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f28b4: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f28b8: 0x8c86016c  lw          $a2, 0x16C($a0)
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2f28bc: 0xae0602b0  sw          $a2, 0x2B0($s0)
    ctx->pc = 0x2f28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 6));
    // 0x2f28c0: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x2f28c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f28c4: 0x8c820170  lw          $v0, 0x170($a0)
    ctx->pc = 0x2f28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x2f28c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F28C8u;
    {
        const bool branch_taken_0x2f28c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28C8u;
        // 0x2f28cc: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28c8) {
            ctx->pc = 0x2F28E8u;
            goto label_2f28e8;
        }
    }
    ctx->pc = 0x2F28D0u;
    // 0x2f28d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f28d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f28d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28d8: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F28D8u;
    SET_GPR_U32(ctx, 31, 0x2F28E0u);
    ctx->pc = 0x2F28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28D8u;
    // 0x2f28dc: 0x24a5eed0  addiu       $a1, $a1, -0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F28D8u, 0x2F28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E0u;
label_2f28e0:
    // 0x2f28e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F28E0u;
    {
        const bool branch_taken_0x2f28e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28E0u;
        // 0x2f28e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28e0) {
            ctx->pc = 0x2F29C8u;
            goto label_2f29c8;
        }
    }
    ctx->pc = 0x2F28E8u;
label_2f28e8:
    // 0x2f28e8: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F28E8u;
    {
        const bool branch_taken_0x2f28e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28E8u;
        // 0x2f28ec: 0x9082018c  lbu         $v0, 0x18C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28e8) {
            ctx->pc = 0x2F28F4u;
            goto label_2f28f4;
        }
    }
    ctx->pc = 0x2F28F0u;
    // 0x2f28f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f28f4:
    // 0x2f28f4: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
    // 0x2f28f8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f28fc: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x2f28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x2f2900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f2904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f2908: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f290c: 0x8062018d  lb          $v0, 0x18D($v1)
    ctx->pc = 0x2f290cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 397)));
    // 0x2f2910: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f2910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2914: 0xa20202d0  sb          $v0, 0x2D0($s0)
    ctx->pc = 0x2f2914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 720), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f2918: 0xc4600148  lwc1        $f0, 0x148($v1)
    ctx->pc = 0x2f2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f291c: 0xc4620150  lwc1        $f2, 0x150($v1)
    ctx->pc = 0x2f291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2920: 0xc461014c  lwc1        $f1, 0x14C($v1)
    ctx->pc = 0x2f2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2924: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x2f2924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x2f2928: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x2f2928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f292c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2f292cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f2930: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2f2930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f2934: 0x82020103  lb          $v0, 0x103($s0)
    ctx->pc = 0x2f2934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 259)));
    // 0x2f2938: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2938u;
    {
        const bool branch_taken_0x2f2938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2938u;
        // 0x2f293c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2938) {
            ctx->pc = 0x2F2950u;
            goto label_2f2950;
        }
    }
    ctx->pc = 0x2F2940u;
    // 0x2f2940: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F2940u;
    SET_GPR_U32(ctx, 31, 0x2F2948u);
    ctx->pc = 0x2F2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2940u;
    // 0x2f2944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F2940u, 0x2F2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2948u;
label_2f2948:
    // 0x2f2948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2948u;
    {
        const bool branch_taken_0x2f2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2948u;
        // 0x2f294c: 0x260202c0  addiu       $v0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2948) {
            ctx->pc = 0x2F295Cu;
            goto label_2f295c;
        }
    }
    ctx->pc = 0x2F2950u;
label_2f2950:
    // 0x2f2950: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F2950u;
    SET_GPR_U32(ctx, 31, 0x2F2958u);
    ctx->pc = 0x2F2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2950u;
    // 0x2f2954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F2950u, 0x2F2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2958u;
label_2f2958:
    // 0x2f2958: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x2f2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2f295c:
    // 0x2f295c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F295Cu;
    {
        const bool branch_taken_0x2f295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F295Cu;
        // 0x2f2960: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f295c) {
            ctx->pc = 0x2F2978u;
            goto label_2f2978;
        }
    }
    ctx->pc = 0x2F2964u;
    // 0x2f2964: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2968: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2f2968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x2f296c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f296cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f2970: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f2970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2974: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f2974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f2978:
    // 0x2f2978: 0x920202d0  lbu         $v0, 0x2D0($s0)
    ctx->pc = 0x2f2978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2f297c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F297Cu;
    {
        const bool branch_taken_0x2f297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f297c) {
            ctx->pc = 0x2F2980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F297Cu;
            // 0x2f2980: 0x8e1102b0  lw          $s1, 0x2B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2994u;
            goto label_2f2994;
        }
    }
    ctx->pc = 0x2F2984u;
    // 0x2f2984: 0xc0c7426  jal         func_31D098
    ctx->pc = 0x2F2984u;
    SET_GPR_U32(ctx, 31, 0x2F298Cu);
    ctx->pc = 0x2F2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2984u;
    // 0x2f2988: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x2F2984u, 0x2F298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F298Cu;
label_2f298c:
    // 0x2f298c: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x2f298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
    // 0x2f2990: 0x8e1102b0  lw          $s1, 0x2B0($s0)
    ctx->pc = 0x2f2990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_2f2994:
    // 0x2f2994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2998: 0x5622000c  bnel        $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2998u;
    {
        const bool branch_taken_0x2f2998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2998) {
            ctx->pc = 0x2F299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2998u;
            // 0x2f299c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F29CCu;
            goto label_2f29cc;
        }
    }
    ctx->pc = 0x2F29A0u;
    // 0x2f29a0: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f29a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F29A4u;
    {
        const bool branch_taken_0x2f29a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29A4u;
        // 0x2f29a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29a4) {
            ctx->pc = 0x2F29C8u;
            goto label_2f29c8;
        }
    }
    ctx->pc = 0x2F29ACu;
    // 0x2f29ac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f29acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f29b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29b4: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x2f29b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    // 0x2f29b8: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F29B8u;
    SET_GPR_U32(ctx, 31, 0x2F29C0u);
    ctx->pc = 0x2F29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29B8u;
    // 0x2f29bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F29B8u, 0x2F29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29C0u;
label_2f29c0:
    // 0x2f29c0: 0xae1102b8  sw          $s1, 0x2B8($s0)
    ctx->pc = 0x2f29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 17));
    // 0x2f29c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f29c8:
    // 0x2f29c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f29c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f29cc:
    // 0x2f29cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f29ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f29d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f29d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f29d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F29D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29D4u;
        // 0x2f29d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F29D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F29DCu;
    // 0x2f29dc: 0x0  nop
    ctx->pc = 0x2f29dcu;
    // NOP
    ctx->pc = 0x2f29e0u;
}
