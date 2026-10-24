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

// Function: func_001890B0
// Address: 0x1890b0 - 0x1895d8
void func_001890B0_0x1890b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001890B0_0x1890b0");
#endif

    switch (ctx->pc) {
        case 0x1890f0u: goto label_1890f0;
        case 0x189148u: goto label_189148;
        case 0x1891c8u: goto label_1891c8;
        case 0x1891ecu: goto label_1891ec;
        case 0x189294u: goto label_189294;
        case 0x1892a8u: goto label_1892a8;
        case 0x1892dcu: goto label_1892dc;
        case 0x189318u: goto label_189318;
        case 0x189344u: goto label_189344;
        case 0x189354u: goto label_189354;
        case 0x189364u: goto label_189364;
        case 0x189374u: goto label_189374;
        case 0x189384u: goto label_189384;
        case 0x189394u: goto label_189394;
        case 0x1893b0u: goto label_1893b0;
        case 0x1893c8u: goto label_1893c8;
        case 0x1894ecu: goto label_1894ec;
        case 0x189510u: goto label_189510;
        case 0x189548u: goto label_189548;
        case 0x189594u: goto label_189594;
        default: break;
    }

    ctx->pc = 0x1890b0u;

    // 0x1890b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1890b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1890b4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1890b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1890b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1890b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890bc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1890bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1890c0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1890c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1890c4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1890c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1890c8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1890c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1890cc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1890ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1890d0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1890d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890d4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1890d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1890d8: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x1890d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x1890dc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1890dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1890e0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1890e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1890e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1890e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1890e8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1890E8u;
    SET_GPR_U32(ctx, 31, 0x1890F0u);
    ctx->pc = 0x1890ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890E8u;
    // 0x1890ec: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1890E8u, 0x1890F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890F0u;
label_1890f0:
    // 0x1890f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1890f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1890f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1890f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1890fc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1890fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x189100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189104: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x189104u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189108: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x189108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18910c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18910cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189110: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x189114: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x189114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
    // 0x189118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18911c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189120: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x189120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x189124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189128: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x189128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18912c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x189130: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x189130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x189134: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x189134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x189138: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x189138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x18913c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x189140: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x189140u;
    SET_GPR_U32(ctx, 31, 0x189148u);
    ctx->pc = 0x189144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189140u;
    // 0x189144: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x189140u, 0x189148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189148u;
label_189148:
    // 0x189148: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x189148u;
    {
        const bool branch_taken_0x189148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189148u;
        // 0x18914c: 0xae220608  sw          $v0, 0x608($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189148) {
            ctx->pc = 0x1891ECu;
            goto label_1891ec;
        }
    }
    ctx->pc = 0x189150u;
    // 0x189150: 0x26a236c0  addiu       $v0, $s5, 0x36C0
    ctx->pc = 0x189150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 14016));
    // 0x189154: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x189154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x189158: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x189158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18915c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18915cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189160: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x189160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189164u;
    {
        const bool branch_taken_0x189164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189164u;
        // 0x189168: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189164) {
            ctx->pc = 0x189174u;
            goto label_189174;
        }
    }
    ctx->pc = 0x18916Cu;
    // 0x18916c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x18916cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189174:
    // 0x189174: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189178u;
    {
        const bool branch_taken_0x189178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189178u;
        // 0x18917c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189178) {
            ctx->pc = 0x189190u;
            goto label_189190;
        }
    }
    ctx->pc = 0x189180u;
    // 0x189180: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x189180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x189184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189188u;
    {
        const bool branch_taken_0x189188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189188u;
        // 0x18918c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189188) {
            ctx->pc = 0x189194u;
            goto label_189194;
        }
    }
    ctx->pc = 0x189190u;
label_189190:
    // 0x189190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189194:
    // 0x189194: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x189194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x189198: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18919c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18919cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1891a0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1891a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1891a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1891a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1891a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1891acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1891b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1891b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1891b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1891b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891b8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1891bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1891bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891c0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1891C0u;
    SET_GPR_U32(ctx, 31, 0x1891C8u);
    ctx->pc = 0x1891C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891C0u;
    // 0x1891c4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1891C0u, 0x1891C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891C8u;
label_1891c8:
    // 0x1891c8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1891cc: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1891ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1891d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1891d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1891d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1891d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891d8: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1891d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1891dc: 0x8e220608  lw          $v0, 0x608($s1)
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1891e0: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1891e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1891e4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1891E4u;
    SET_GPR_U32(ctx, 31, 0x1891ECu);
    ctx->pc = 0x1891E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891E4u;
    // 0x1891e8: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1891E4u, 0x1891ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891ECu;
label_1891ec:
    // 0x1891ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1891ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1891f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1891f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1891f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1891f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1891f8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1891fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x189200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189204: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x189204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189208: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x189208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18920c: 0x26904380  addiu       $s0, $s4, 0x4380
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 17280));
    // 0x189210: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189214: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x189214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189218: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18921c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x18921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x189220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189224: 0x3c01bfe6  lui         $at, 0xBFE6
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49126 << 16));
    // 0x189228: 0x3421bb99  ori         $at, $at, 0xBB99
    ctx->pc = 0x189228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48025);
    // 0x18922c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18922cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x189230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189234: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x189234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x189238: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18923c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x18923cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x189240: 0x3c01c06f  lui         $at, 0xC06F
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49263 << 16));
    // 0x189244: 0x3421fb16  ori         $at, $at, 0xFB16
    ctx->pc = 0x189244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64278);
    // 0x189248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18924c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x18924cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x189250: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x189254: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x189254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x189258: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x189258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18925c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x18925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x189260: 0x3c01bfe8  lui         $at, 0xBFE8
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49128 << 16));
    // 0x189264: 0x34210347  ori         $at, $at, 0x347
    ctx->pc = 0x189264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)839);
    // 0x189268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18926c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x18926cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x189270: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x189270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x189274: 0x3c014054  lui         $at, 0x4054
    ctx->pc = 0x189274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16468 << 16));
    // 0x189278: 0x34217fcc  ori         $at, $at, 0x7FCC
    ctx->pc = 0x189278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32716);
    // 0x18927c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189280: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x189280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x189284: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x189284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x189288: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x189288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x18928c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18928Cu;
    SET_GPR_U32(ctx, 31, 0x189294u);
    ctx->pc = 0x189290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18928Cu;
    // 0x189290: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18928Cu, 0x189294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189294u;
label_189294:
    // 0x189294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189298: 0xae220600  sw          $v0, 0x600($s1)
    ctx->pc = 0x189298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    // 0x18929c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892a0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1892A0u;
    SET_GPR_U32(ctx, 31, 0x1892A8u);
    ctx->pc = 0x1892A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892A0u;
    // 0x1892a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1892A0u, 0x1892A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892A8u;
label_1892a8:
    // 0x1892a8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1892ac: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1892ACu;
    {
        const bool branch_taken_0x1892ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892ACu;
        // 0x1892b0: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892ac) {
            ctx->pc = 0x1892ECu;
            goto label_1892ec;
        }
    }
    ctx->pc = 0x1892B4u;
    // 0x1892b4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1892b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1892b8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1892b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1892bc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1892bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1892c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1892c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892c4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1892c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1892c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892cc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1892ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1892d0: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1892d4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1892D4u;
    SET_GPR_U32(ctx, 31, 0x1892DCu);
    ctx->pc = 0x1892D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892D4u;
    // 0x1892d8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1892D4u, 0x1892DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892DCu;
label_1892dc:
    // 0x1892dc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1892dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1892e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1892e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1892e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1892e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1892e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1892ec:
    // 0x1892ec: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1892f0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1892F0u;
    {
        const bool branch_taken_0x1892f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F0u;
        // 0x1892f4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f0) {
            ctx->pc = 0x189328u;
            goto label_189328;
        }
    }
    ctx->pc = 0x1892F8u;
    // 0x1892f8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1892f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1892fc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1892fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x189300: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x189300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189304: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x189304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x189308: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x189308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18930c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18930cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x189310: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x189310u;
    SET_GPR_U32(ctx, 31, 0x189318u);
    ctx->pc = 0x189314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189310u;
    // 0x189314: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x189310u, 0x189318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189318u;
label_189318:
    // 0x189318: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x189318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x18931c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189320: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x189320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x189324: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x189324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_189328:
    // 0x189328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18932c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189330: 0xa6220cd4  sh          $v0, 0xCD4($s1)
    ctx->pc = 0x189330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3284), (uint16_t)GPR_U32(ctx, 2));
    // 0x189334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189338: 0xa6220cd2  sh          $v0, 0xCD2($s1)
    ctx->pc = 0x189338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3282), (uint16_t)GPR_U32(ctx, 2));
    // 0x18933c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18933Cu;
    SET_GPR_U32(ctx, 31, 0x189344u);
    ctx->pc = 0x189340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18933Cu;
    // 0x189340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18933Cu, 0x189344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189344u;
label_189344:
    // 0x189344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18934c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18934Cu;
    SET_GPR_U32(ctx, 31, 0x189354u);
    ctx->pc = 0x189350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18934Cu;
    // 0x189350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18934Cu, 0x189354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189354u;
label_189354:
    // 0x189354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189358: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18935c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18935Cu;
    SET_GPR_U32(ctx, 31, 0x189364u);
    ctx->pc = 0x189360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18935Cu;
    // 0x189360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18935Cu, 0x189364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189364u;
label_189364:
    // 0x189364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189368: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18936c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18936Cu;
    SET_GPR_U32(ctx, 31, 0x189374u);
    ctx->pc = 0x189370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18936Cu;
    // 0x189370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18936Cu, 0x189374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189374u;
label_189374:
    // 0x189374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189378: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x189378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x18937c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18937Cu;
    SET_GPR_U32(ctx, 31, 0x189384u);
    ctx->pc = 0x189380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18937Cu;
    // 0x189380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18937Cu, 0x189384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189384u;
label_189384:
    // 0x189384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189388: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18938c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18938Cu;
    SET_GPR_U32(ctx, 31, 0x189394u);
    ctx->pc = 0x189390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18938Cu;
    // 0x189390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18938Cu, 0x189394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189394u;
label_189394:
    // 0x189394: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x189398: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189398u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18939c: 0x244936c0  addiu       $t1, $v0, 0x36C0
    ctx->pc = 0x18939cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
    // 0x1893a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1893a4: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1893a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1893ac: 0x0  nop
    ctx->pc = 0x1893acu;
    // NOP
label_1893b0:
    // 0x1893b0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1893b4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1893b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1893b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1893BCu;
    {
        const bool branch_taken_0x1893bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893BCu;
        // 0x1893c0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893bc) {
            ctx->pc = 0x189454u;
            goto label_189454;
        }
    }
    ctx->pc = 0x1893C4u;
    // 0x1893c4: 0x0  nop
    ctx->pc = 0x1893c4u;
    // NOP
label_1893c8:
    // 0x1893c8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1893c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1893cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1893CCu;
    {
        const bool branch_taken_0x1893cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1893D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893CCu;
        // 0x1893d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893cc) {
            ctx->pc = 0x1893DCu;
            goto label_1893dc;
        }
    }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1893d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1893d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1893d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1893dc:
    // 0x1893dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1893dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1893e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1893E0u;
    {
        const bool branch_taken_0x1893e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893E0u;
        // 0x1893e4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893e0) {
            ctx->pc = 0x1893F8u;
            goto label_1893f8;
        }
    }
    ctx->pc = 0x1893E8u;
    // 0x1893e8: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1893e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1893ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1893f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1893F0u;
    {
        const bool branch_taken_0x1893f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893F0u;
        // 0x1893f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893f0) {
            ctx->pc = 0x1893FCu;
            goto label_1893fc;
        }
    }
    ctx->pc = 0x1893F8u;
label_1893f8:
    // 0x1893f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1893f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1893fc:
    // 0x1893fc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x189400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189404: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x189404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x189408: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x189408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18940c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18940cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x189410: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x189410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x189414: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189414u;
    {
        const bool branch_taken_0x189414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189414u;
        // 0x189418: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189414) {
            ctx->pc = 0x189424u;
            goto label_189424;
        }
    }
    ctx->pc = 0x18941Cu;
    // 0x18941c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x18941cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189424:
    // 0x189424: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189428u;
    {
        const bool branch_taken_0x189428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189428u;
        // 0x18942c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189428) {
            ctx->pc = 0x189440u;
            goto label_189440;
        }
    }
    ctx->pc = 0x189430u;
    // 0x189430: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x189434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189438u;
    {
        const bool branch_taken_0x189438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189438u;
        // 0x18943c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189438) {
            ctx->pc = 0x189444u;
            goto label_189444;
        }
    }
    ctx->pc = 0x189440u;
label_189440:
    // 0x189440: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x189440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189444:
    // 0x189444: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x189448: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x189448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18944c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x189450: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x189450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_189454:
    // 0x189454: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x189454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x189458: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x18945c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x18945cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189460: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x189460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189468: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x189468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18946c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18946Cu;
    {
        const bool branch_taken_0x18946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18946c) {
            ctx->pc = 0x189470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18946Cu;
            // 0x189470: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189488u;
            goto label_189488;
        }
    }
    ctx->pc = 0x189474u;
    // 0x189474: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x189474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x189478: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x189478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18947c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x18947Cu;
    {
        const bool branch_taken_0x18947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18947c) {
            ctx->pc = 0x189480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18947Cu;
            // 0x189480: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893c8;
        }
    }
    ctx->pc = 0x189484u;
    // 0x189484: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x189484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_189488:
    // 0x189488: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x189488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18948c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18948Cu;
    {
        const bool branch_taken_0x18948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18948Cu;
        // 0x189490: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18948c) {
            ctx->pc = 0x1893B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893b0;
        }
    }
    ctx->pc = 0x189494u;
    // 0x189494: 0x26a236c0  addiu       $v0, $s5, 0x36C0
    ctx->pc = 0x189494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 14016));
    // 0x189498: 0x9056000b  lbu         $s6, 0xB($v0)
    ctx->pc = 0x189498u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x18949c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1894a0: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1894a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1894a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1894a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1894a8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1894a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1894ac: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1894acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1894b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1894B0u;
    {
        const bool branch_taken_0x1894b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B0u;
        // 0x1894b4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b0) {
            ctx->pc = 0x1894C0u;
            goto label_1894c0;
        }
    }
    ctx->pc = 0x1894B8u;
    // 0x1894b8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1894b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1894bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1894bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1894c0:
    // 0x1894c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1894c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1894c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1894C4u;
    {
        const bool branch_taken_0x1894c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894C4u;
        // 0x1894c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894c4) {
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894CCu;
    // 0x1894cc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1894ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1894d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1894d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1894D4u;
    {
        const bool branch_taken_0x1894d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894D4u;
        // 0x1894d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894d4) {
            ctx->pc = 0x1894E0u;
            goto label_1894e0;
        }
    }
    ctx->pc = 0x1894DCu;
label_1894dc:
    // 0x1894dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1894dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1894e0:
    // 0x1894e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1894e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1894e4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1894E4u;
    SET_GPR_U32(ctx, 31, 0x1894ECu);
    ctx->pc = 0x1894E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894E4u;
    // 0x1894e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1894E4u, 0x1894ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894ECu;
label_1894ec:
    // 0x1894ec: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x1894ECu;
    {
        const bool branch_taken_0x1894ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894ec) {
            ctx->pc = 0x1895A0u;
            goto label_1895a0;
        }
    }
    ctx->pc = 0x1894F4u;
    // 0x1894f4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1894f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1894f8: 0x904336ca  lbu         $v1, 0x36CA($v0)
    ctx->pc = 0x1894f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14026)));
    // 0x1894fc: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189500: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x189500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189504: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189508: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x189508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18950c: 0x0  nop
    ctx->pc = 0x18950cu;
    // NOP
label_189510:
    // 0x189510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189514: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x189514u;
    {
        const bool branch_taken_0x189514 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x189518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189514u;
        // 0x189518: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189514) {
            ctx->pc = 0x189520u;
            goto label_189520;
        }
    }
    ctx->pc = 0x18951Cu;
    // 0x18951c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18951cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189520:
    // 0x189520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x189520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x189524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189524u;
    {
        const bool branch_taken_0x189524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189524u;
        // 0x189528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189524) {
            ctx->pc = 0x189538u;
            goto label_189538;
        }
    }
    ctx->pc = 0x18952Cu;
    // 0x18952c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x18952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x189530: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x189534: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x189534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189538:
    // 0x189538: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x189538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18953c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189540: 0xc051f18  jal         func_147C60
    ctx->pc = 0x189540u;
    SET_GPR_U32(ctx, 31, 0x189548u);
    ctx->pc = 0x189544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189540u;
    // 0x189544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x189540u, 0x189548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189548u;
label_189548:
    // 0x189548: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x189548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18954c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18954cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189550: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x189550u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189554: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x189554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x189558: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x189558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18955c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x18955cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x189560: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x189560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189564: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x189564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18956c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x189570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189574: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x189574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189578: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x189578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x18957c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x189580: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x189584: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x189584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x189588: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x189588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18958c: 0xc051f10  jal         func_147C40
    ctx->pc = 0x18958Cu;
    SET_GPR_U32(ctx, 31, 0x189594u);
    ctx->pc = 0x189590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18958Cu;
    // 0x189590: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18958Cu, 0x189594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189594u;
label_189594:
    // 0x189594: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x189594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x189598: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x189598u;
    {
        const bool branch_taken_0x189598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189598) {
            ctx->pc = 0x18959Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189598u;
            // 0x18959c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189510;
        }
    }
    ctx->pc = 0x1895A0u;
label_1895a0:
    // 0x1895a0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1895a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1895a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1895a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1895a8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1895a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1895ac: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1895acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1895b0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1895b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1895b4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1895b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1895b8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1895b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1895bc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1895bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1895c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1895c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1895c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1895c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1895c8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1895c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1895cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1895CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1895D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895CCu;
        // 0x1895d0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1895CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1895D4u;
    // 0x1895d4: 0x0  nop
    ctx->pc = 0x1895d4u;
    // NOP
    ctx->pc = 0x1895d8u;
}
