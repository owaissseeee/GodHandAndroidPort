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

// Function: func_001321D8
// Address: 0x1321d8 - 0x1325a0
void func_001321D8_0x1321d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001321D8_0x1321d8");
#endif

    switch (ctx->pc) {
        case 0x1322e0u: goto label_1322e0;
        case 0x132310u: goto label_132310;
        case 0x132328u: goto label_132328;
        case 0x132358u: goto label_132358;
        case 0x132380u: goto label_132380;
        case 0x1323d8u: goto label_1323d8;
        case 0x1323e8u: goto label_1323e8;
        case 0x132428u: goto label_132428;
        case 0x132438u: goto label_132438;
        case 0x132480u: goto label_132480;
        case 0x132490u: goto label_132490;
        case 0x1324e0u: goto label_1324e0;
        case 0x132568u: goto label_132568;
        default: break;
    }

    ctx->pc = 0x1321d8u;

    // 0x1321d8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1321d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1321dc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1321dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1321e0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1321e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1321e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1321e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321e8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1321e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1321ec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1321ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1321f0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1321f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1321f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1321f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1321f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1321f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1321fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1321fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x132200: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x132200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x132204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x132204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x132208: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x132208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13220c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x132210: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x132210u;
    {
        const bool branch_taken_0x132210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132210u;
        // 0x132214: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132210) {
            ctx->pc = 0x1322E8u;
            goto label_1322e8;
        }
    }
    ctx->pc = 0x132218u;
    // 0x132218: 0xae880174  sw          $t0, 0x174($s4)
    ctx->pc = 0x132218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 372), GPR_U32(ctx, 8));
    // 0x13221c: 0x26820100  addiu       $v0, $s4, 0x100
    ctx->pc = 0x13221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x132220: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x132220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x132224: 0xae890178  sw          $t1, 0x178($s4)
    ctx->pc = 0x132224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 9));
    // 0x132228: 0xae8a018c  sw          $t2, 0x18C($s4)
    ctx->pc = 0x132228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 10));
    // 0x13222c: 0xae8b0140  sw          $t3, 0x140($s4)
    ctx->pc = 0x13222cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 11));
    // 0x132230: 0xae80017c  sw          $zero, 0x17C($s4)
    ctx->pc = 0x132230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 0));
    // 0x132234: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x132234u;
    {
        const bool branch_taken_0x132234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x132238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132234u;
        // 0x132238: 0xa2800180  sb          $zero, 0x180($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132234) {
            ctx->pc = 0x132254u;
            goto label_132254;
        }
    }
    ctx->pc = 0x13223Cu;
    // 0x13223c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132240: 0xe6800100  swc1        $f0, 0x100($s4)
    ctx->pc = 0x132240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x132244: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x132244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132248: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x132248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13224c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132250: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x132250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_132254:
    // 0x132254: 0x26830120  addiu       $v1, $s4, 0x120
    ctx->pc = 0x132254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x132258: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x132258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13225c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13225Cu;
    {
        const bool branch_taken_0x13225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13225Cu;
        // 0x132260: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13225c) {
            ctx->pc = 0x13227Cu;
            goto label_13227c;
        }
    }
    ctx->pc = 0x132264u;
    // 0x132264: 0xc6800100  lwc1        $f0, 0x100($s4)
    ctx->pc = 0x132264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132268: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x132268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
    // 0x13226c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132270: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x132270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x132274: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x132274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132278: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x132278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13227c:
    // 0x13227c: 0xc6800100  lwc1        $f0, 0x100($s4)
    ctx->pc = 0x13227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132280: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x132280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x132284: 0xc6810104  lwc1        $f1, 0x104($s4)
    ctx->pc = 0x132284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132288: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x132288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13228c: 0xc6820108  lwc1        $f2, 0x108($s4)
    ctx->pc = 0x13228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132290: 0x460c00c0  add.s       $f3, $f0, $f12
    ctx->pc = 0x132290u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x132294: 0x460c0900  add.s       $f4, $f1, $f12
    ctx->pc = 0x132294u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x132298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13229c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x13229cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1322a0: 0x460c1140  add.s       $f5, $f2, $f12
    ctx->pc = 0x1322a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x1322a4: 0xe68c0110  swc1        $f12, 0x110($s4)
    ctx->pc = 0x1322a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 272), bits); }
    // 0x1322a8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1322a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1322ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1322acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1322b0: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x1322b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1322b4: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1322b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1322b8: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x1322b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1322bc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x1322bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1322c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1322c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1322c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1322c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1322c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1322cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1322ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322d0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1322d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1322d4: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x1322d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1322d8: 0xc04bca2  jal         func_12F288
    ctx->pc = 0x1322D8u;
    SET_GPR_U32(ctx, 31, 0x1322E0u);
    ctx->pc = 0x1322DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322D8u;
    // 0x1322dc: 0xe446000c  swc1        $f6, 0xC($v0) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F288u, 0x1322D8u, 0x1322E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322E0u;
label_1322e0:
    // 0x1322e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1322E0u;
    {
        const bool branch_taken_0x1322e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1322e0) {
            ctx->pc = 0x1322E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1322E0u;
            // 0x1322e4: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1322F0u;
            goto label_1322f0;
        }
    }
    ctx->pc = 0x1322E8u;
label_1322e8:
    // 0x1322e8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1322E8u;
    {
        const bool branch_taken_0x1322e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1322ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322E8u;
        // 0x1322ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322e8) {
            ctx->pc = 0x13256Cu;
            goto label_13256c;
        }
    }
    ctx->pc = 0x1322F0u;
label_1322f0:
    // 0x1322f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1322f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322f4: 0x8e860078  lw          $a2, 0x78($s4)
    ctx->pc = 0x1322f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x1322f8: 0x8e870070  lw          $a3, 0x70($s4)
    ctx->pc = 0x1322f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1322fc: 0x8e88007c  lw          $t0, 0x7C($s4)
    ctx->pc = 0x1322fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x132300: 0x8e890074  lw          $t1, 0x74($s4)
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x132304: 0x8e8a0080  lw          $t2, 0x80($s4)
    ctx->pc = 0x132304u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x132308: 0xc04bd32  jal         func_12F4C8
    ctx->pc = 0x132308u;
    SET_GPR_U32(ctx, 31, 0x132310u);
    ctx->pc = 0x13230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132308u;
    // 0x13230c: 0x8e8b0174  lw          $t3, 0x174($s4) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F4C8u, 0x132308u, 0x132310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132310u;
label_132310:
    // 0x132310: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x132310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x132314: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x132314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x132318: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x132318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13231c: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x13231Cu;
    {
        const bool branch_taken_0x13231c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13231c) {
            ctx->pc = 0x132320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13231Cu;
            // 0x132320: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1324D8u;
            goto label_1324d8;
        }
    }
    ctx->pc = 0x132324u;
    // 0x132324: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x132324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_132328:
    // 0x132328: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x132328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13232c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13232cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x132330: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x132330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x132334: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x132334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x132338: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x132338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x13233c: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x13233cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x132340: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x132340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x132344: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x132344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x132348: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x132348u;
    {
        const bool branch_taken_0x132348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132348u;
        // 0x13234c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132348) {
            ctx->pc = 0x1324C0u;
            goto label_1324c0;
        }
    }
    ctx->pc = 0x132350u;
    // 0x132350: 0x8e830068  lw          $v1, 0x68($s4)
    ctx->pc = 0x132350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x132354: 0x0  nop
    ctx->pc = 0x132354u;
    // NOP
label_132358:
    // 0x132358: 0x24de0001  addiu       $fp, $a2, 0x1
    ctx->pc = 0x132358u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13235c: 0x8e850074  lw          $a1, 0x74($s4)
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x132360: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x132360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x132364: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x132364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x132368: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x132368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13236c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x13236Cu;
    {
        const bool branch_taken_0x13236c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13236Cu;
        // 0x132370: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13236c) {
            ctx->pc = 0x1324ACu;
            goto label_1324ac;
        }
    }
    ctx->pc = 0x132374u;
    // 0x132374: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x132378: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x132378u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x13237c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_132380:
    // 0x132380: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132384: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x132384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x132388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13238c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132390: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x132394: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x132394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132398: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13239c: 0x1076003e  beq         $v1, $s6, . + 4 + (0x3E << 2)
    ctx->pc = 0x13239Cu;
    {
        const bool branch_taken_0x13239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1323A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13239Cu;
        // 0x1323a0: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13239c) {
            ctx->pc = 0x132498u;
            goto label_132498;
        }
    }
    ctx->pc = 0x1323A4u;
    // 0x1323a4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1323a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1323a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1323ac: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x1323acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1323b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1323b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1323b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1323B4u;
    {
        const bool branch_taken_0x1323b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323B4u;
        // 0x1323b8: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323b4) {
            ctx->pc = 0x1323F0u;
            goto label_1323f0;
        }
    }
    ctx->pc = 0x1323BCu;
    // 0x1323bc: 0x92700004  lbu         $s0, 0x4($s3)
    ctx->pc = 0x1323bcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1323c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1323c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1323c4: 0x1216000a  beq         $s0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x1323C4u;
    {
        const bool branch_taken_0x1323c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323C4u;
        // 0x1323c8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323c4) {
            ctx->pc = 0x1323F0u;
            goto label_1323f0;
        }
    }
    ctx->pc = 0x1323CCu;
    // 0x1323cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1323ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1323d0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1323d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1323d4: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x1323d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1323d8:
    // 0x1323d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1323d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323dc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1323e0: 0xc04bf08  jal         func_12FC20
    ctx->pc = 0x1323E0u;
    SET_GPR_U32(ctx, 31, 0x1323E8u);
    ctx->pc = 0x1323E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323E0u;
    // 0x1323e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC20u, 0x1323E0u, 0x1323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323E8u;
label_1323e8:
    // 0x1323e8: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1323E8u;
    {
        const bool branch_taken_0x1323e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1323e8) {
            ctx->pc = 0x1323ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323E8u;
            // 0x1323ec: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1323D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1323d8;
        }
    }
    ctx->pc = 0x1323F0u;
label_1323f0:
    // 0x1323f0: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x1323f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x1323f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1323f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1323f8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1323F8u;
    {
        const bool branch_taken_0x1323f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323f8) {
            ctx->pc = 0x1323FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323F8u;
            // 0x1323fc: 0x8e820174  lw          $v0, 0x174($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132444u;
            goto label_132444;
        }
    }
    ctx->pc = 0x132400u;
    // 0x132400: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x132400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x132404: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x132404u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x132408: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13240c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x132410: 0x1216000b  beq         $s0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x132410u;
    {
        const bool branch_taken_0x132410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x132414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132410u;
        // 0x132414: 0x2a29021  addu        $s2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132410) {
            ctx->pc = 0x132440u;
            goto label_132440;
        }
    }
    ctx->pc = 0x132418u;
    // 0x132418: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x13241c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x13241cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x132420: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x132420u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132424: 0x0  nop
    ctx->pc = 0x132424u;
    // NOP
label_132428:
    // 0x132428: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13242c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x132430: 0xc04bf08  jal         func_12FC20
    ctx->pc = 0x132430u;
    SET_GPR_U32(ctx, 31, 0x132438u);
    ctx->pc = 0x132434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132430u;
    // 0x132434: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC20u, 0x132430u, 0x132438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132438u;
label_132438:
    // 0x132438: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x132438u;
    {
        const bool branch_taken_0x132438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x132438) {
            ctx->pc = 0x13243Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132438u;
            // 0x13243c: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132428;
        }
    }
    ctx->pc = 0x132440u;
label_132440:
    // 0x132440: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_132444:
    // 0x132444: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x132444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x132448: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x132448u;
    {
        const bool branch_taken_0x132448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132448) {
            ctx->pc = 0x13244Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132448u;
            // 0x13244c: 0x8e820080  lw          $v0, 0x80($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13249Cu;
            goto label_13249c;
        }
    }
    ctx->pc = 0x132450u;
    // 0x132450: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x132450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x132454: 0x92630005  lbu         $v1, 0x5($s3)
    ctx->pc = 0x132454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x132458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x132458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13245c: 0x92700006  lbu         $s0, 0x6($s3)
    ctx->pc = 0x13245cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x132460: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x132460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x132464: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x132464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x132468: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x132468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13246c: 0x1216000a  beq         $s0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x132470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13246Cu;
        // 0x132470: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132498u;
            goto label_132498;
        }
    }
    ctx->pc = 0x132474u;
    // 0x132474: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x132478: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x132478u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x13247c: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x13247cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_132480:
    // 0x132480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132484: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x132484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x132488: 0xc04bf08  jal         func_12FC20
    ctx->pc = 0x132488u;
    SET_GPR_U32(ctx, 31, 0x132490u);
    ctx->pc = 0x13248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132488u;
    // 0x13248c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC20u, 0x132488u, 0x132490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132490u;
label_132490:
    // 0x132490: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x132490u;
    {
        const bool branch_taken_0x132490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x132490) {
            ctx->pc = 0x132494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132490u;
            // 0x132494: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132480;
        }
    }
    ctx->pc = 0x132498u;
label_132498:
    // 0x132498: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x132498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_13249c:
    // 0x13249c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x13249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324a0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1324a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1324a4: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1324A4u;
    {
        const bool branch_taken_0x1324a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324A4u;
        // 0x1324a8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324a4) {
            ctx->pc = 0x132380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132380;
        }
    }
    ctx->pc = 0x1324ACu;
label_1324ac:
    // 0x1324ac: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x1324acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1324b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1324b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324b4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1324b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1324b8: 0x5040ffa7  beql        $v0, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1324B8u;
    {
        const bool branch_taken_0x1324b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324b8) {
            ctx->pc = 0x1324BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1324B8u;
            // 0x1324bc: 0x8e830068  lw          $v1, 0x68($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132358;
        }
    }
    ctx->pc = 0x1324C0u;
label_1324c0:
    // 0x1324c0: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x1324c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1324c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1324c8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1324c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1324cc: 0x5040ff96  beql        $v0, $zero, . + 4 + (-0x6A << 2)
    ctx->pc = 0x1324CCu;
    {
        const bool branch_taken_0x1324cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324cc) {
            ctx->pc = 0x1324D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1324CCu;
            // 0x1324d0: 0x8e830064  lw          $v1, 0x64($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132328;
        }
    }
    ctx->pc = 0x1324D4u;
    // 0x1324d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1324d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1324d8:
    // 0x1324d8: 0xc04c468  jal         func_1311A0
    ctx->pc = 0x1324D8u;
    SET_GPR_U32(ctx, 31, 0x1324E0u);
    ctx->pc = 0x1324DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1324D8u;
    // 0x1324dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1311A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1311A0u, 0x1324D8u, 0x1324E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324E0u;
label_1324e0:
    // 0x1324e0: 0x92820180  lbu         $v0, 0x180($s4)
    ctx->pc = 0x1324e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
    // 0x1324e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1324E4u;
    {
        const bool branch_taken_0x1324e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324E4u;
        // 0x1324e8: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324e4) {
            ctx->pc = 0x132528u;
            goto label_132528;
        }
    }
    ctx->pc = 0x1324ECu;
    // 0x1324ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1324ECu;
    {
        const bool branch_taken_0x1324ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324ECu;
        // 0x1324f0: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324ec) {
            ctx->pc = 0x132514u;
            goto label_132514;
        }
    }
    ctx->pc = 0x1324F4u;
    // 0x1324f4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1324F4u;
    {
        const bool branch_taken_0x1324f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1324f4) {
            ctx->pc = 0x1324F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1324F4u;
            // 0x1324f8: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132518u;
            goto label_132518;
        }
    }
    ctx->pc = 0x1324FCu;
    // 0x1324fc: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x1324fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132500: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x132500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x132504: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x132504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132508: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x132508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13250c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132510: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x132510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_132514:
    // 0x132514: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x132514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_132518:
    // 0x132518: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132518u;
    {
        const bool branch_taken_0x132518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132518u;
        // 0x13251c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132518) {
            ctx->pc = 0x13252Cu;
            goto label_13252c;
        }
    }
    ctx->pc = 0x132520u;
    // 0x132520: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x132520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x132524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x132524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_132528:
    // 0x132528: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x132528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_13252c:
    // 0x13252c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x13252cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x132530: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x132530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x132534: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x132538: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x132538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13253c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13253Cu;
    {
        const bool branch_taken_0x13253c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13253Cu;
        // 0x132540: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13253c) {
            ctx->pc = 0x132568u;
            goto label_132568;
        }
    }
    ctx->pc = 0x132544u;
    // 0x132544: 0x92820180  lbu         $v0, 0x180($s4)
    ctx->pc = 0x132544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
    // 0x132548: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13254c: 0x3c0380ff  lui         $v1, 0x80FF
    ctx->pc = 0x13254cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33023 << 16));
    // 0x132550: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x132550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x132554: 0xc68c0110  lwc1        $f12, 0x110($s4)
    ctx->pc = 0x132554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x132558: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x132558u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x13255c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132560: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x132560u;
    SET_GPR_U32(ctx, 31, 0x132568u);
    ctx->pc = 0x132564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132560u;
    // 0x132564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x132560u, 0x132568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132568u;
label_132568:
    // 0x132568: 0x92820180  lbu         $v0, 0x180($s4)
    ctx->pc = 0x132568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
label_13256c:
    // 0x13256c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x13256cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x132570: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x132570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x132574: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x132574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x132578: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x132578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13257c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x13257cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x132580: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x132580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x132584: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x132584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132588: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x132588u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13258c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x13258cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x132590: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x132590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132594: 0x3e00008  jr          $ra
    ctx->pc = 0x132594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132594u;
        // 0x132598: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13259Cu;
    // 0x13259c: 0x0  nop
    ctx->pc = 0x13259cu;
    // NOP
    ctx->pc = 0x1325a0u;
}
