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

// Function: func_002AD748
// Address: 0x2ad748 - 0x2adc70
void func_002AD748_0x2ad748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD748_0x2ad748");
#endif

    switch (ctx->pc) {
        case 0x2ad790u: goto label_2ad790;
        case 0x2ad7a8u: goto label_2ad7a8;
        case 0x2ad808u: goto label_2ad808;
        case 0x2ad838u: goto label_2ad838;
        case 0x2ad8a0u: goto label_2ad8a0;
        case 0x2ad914u: goto label_2ad914;
        case 0x2ad9c8u: goto label_2ad9c8;
        case 0x2ada20u: goto label_2ada20;
        case 0x2adb58u: goto label_2adb58;
        case 0x2adb70u: goto label_2adb70;
        case 0x2adba0u: goto label_2adba0;
        case 0x2adbc0u: goto label_2adbc0;
        case 0x2adbe4u: goto label_2adbe4;
        default: break;
    }

    ctx->pc = 0x2ad748u;

    // 0x2ad748: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ad748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ad74c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2ad74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2ad750: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2ad750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2ad754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad758: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2ad758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2ad75c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2ad75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2ad760: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2ad760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2ad764: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2ad764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2ad768: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ad768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2ad76c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ad76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ad770: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2ad770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2ad774: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ad774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ad778: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2ad778u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2ad77c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2ad77cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2ad780: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ad784: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AD784u;
    {
        const bool branch_taken_0x2ad784 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD784u;
        // 0x2ad788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad784) {
            ctx->pc = 0x2AD7F8u;
            goto label_2ad7f8;
        }
    }
    ctx->pc = 0x2AD78Cu;
    // 0x2ad78c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad790:
    // 0x2ad790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ad790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad794: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AD794u;
    {
        const bool branch_taken_0x2ad794 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD794u;
        // 0x2ad798: 0x24a60001  addiu       $a2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad794) {
            ctx->pc = 0x2AD7E0u;
            goto label_2ad7e0;
        }
    }
    ctx->pc = 0x2AD79Cu;
    // 0x2ad79c: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2ad79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad7a0: 0x654018  mult        $t0, $v1, $a1
    ctx->pc = 0x2ad7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2ad7a4: 0x0  nop
    ctx->pc = 0x2ad7a4u;
    // NOP
label_2ad7a8:
    // 0x2ad7a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2ad7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ad7ac: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2ad7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2ad7b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ad7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad7b4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2ad7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad7b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ad7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ad7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad7c0: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2ad7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2ad7c4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2ad7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2ad7c8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2ad7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2ad7cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ad7d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad7d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2ad7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ad7d8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AD7D8u;
    {
        const bool branch_taken_0x2ad7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7D8u;
        // 0x2ad7dc: 0x654018  mult        $t0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7d8) {
            ctx->pc = 0x2AD7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad7a8;
        }
    }
    ctx->pc = 0x2AD7E0u;
label_2ad7e0:
    // 0x2ad7e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ad7e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ad7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7e8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2ad7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ad7ec: 0x5040ffe8  beql        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AD7ECu;
    {
        const bool branch_taken_0x2ad7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7ec) {
            ctx->pc = 0x2AD7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD7ECu;
            // 0x2ad7f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad790;
        }
    }
    ctx->pc = 0x2AD7F4u;
    // 0x2ad7f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ad7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ad7f8:
    // 0x2ad7f8: 0x4400068  bltz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2AD7F8u;
    {
        const bool branch_taken_0x2ad7f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7F8u;
        // 0x2ad7fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7f8) {
            ctx->pc = 0x2AD99Cu;
            goto label_2ad99c;
        }
    }
    ctx->pc = 0x2AD800u;
    // 0x2ad800: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad804: 0x0  nop
    ctx->pc = 0x2ad804u;
    // NOP
label_2ad808:
    // 0x2ad808: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ad80c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ad80cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad810: 0x460005d  bltz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2AD810u;
    {
        const bool branch_taken_0x2ad810 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD810u;
        // 0x2ad814: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad810) {
            ctx->pc = 0x2AD988u;
            goto label_2ad988;
        }
    }
    ctx->pc = 0x2AD818u;
    // 0x2ad818: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2ad818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ad81c: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x2ad81cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ad824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ad828: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2ad828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad82c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad830: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x2ad830u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad834: 0x732018  mult        $a0, $v1, $s3
    ctx->pc = 0x2ad834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ad838:
    // 0x2ad838: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad83c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2ad83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2ad840: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ad840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ad844: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2ad844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ad848: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2ad848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad84c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad850: 0x90430048  lbu         $v1, 0x48($v0)
    ctx->pc = 0x2ad850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ad854: 0x10680047  beq         $v1, $t0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2AD854u;
    {
        const bool branch_taken_0x2ad854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x2AD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD854u;
        // 0x2ad858: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad854) {
            ctx->pc = 0x2AD974u;
            goto label_2ad974;
        }
    }
    ctx->pc = 0x2AD85Cu;
    // 0x2ad85c: 0xc4420040  lwc1        $f2, 0x40($v0)
    ctx->pc = 0x2ad85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad860: 0xc4612398  lwc1        $f1, 0x2398($v1)
    ctx->pc = 0x2ad860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 9112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad864: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2ad864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad868: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ad868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ad86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad870: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2ad870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2ad874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad878: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2ad878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ad87c: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x2ad87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ad880: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2ad884: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ad884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ad888: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2ad888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad88c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2ad88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad890: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2ad890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ad894: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2ad894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ad898: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2AD898u;
    SET_GPR_U32(ctx, 31, 0x2AD8A0u);
    ctx->pc = 0x2AD89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD898u;
    // 0x2ad89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2AD898u, 0x2AD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8A0u;
label_2ad8a0:
    // 0x2ad8a0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ad8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad8a4: 0x0  nop
    ctx->pc = 0x2ad8a4u;
    // NOP
    // 0x2ad8a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2AD8A8u;
    {
        const bool branch_taken_0x2ad8a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad8a8) {
            ctx->pc = 0x2AD8E8u;
            goto label_2ad8e8;
        }
    }
    ctx->pc = 0x2AD8B0u;
    // 0x2ad8b0: 0x0  nop
    ctx->pc = 0x2ad8b0u;
    // NOP
    // 0x2ad8b4: 0x0  nop
    ctx->pc = 0x2ad8b4u;
    // NOP
    // 0x2ad8b8: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x2ad8b8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2ad8bc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ad8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad8c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ad8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ad8c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ad8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ad8c8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2ad8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad8cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ad8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ad8d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ad8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ad8d4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2ad8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad8d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ad8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ad8dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2ad8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ad8e0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2ad8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad8e4: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ad8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2ad8e8:
    // 0x2ad8e8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2ad8e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ad8ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad8f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad8f4: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x2ad8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ad8f8: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x2ad8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ad8fc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x2ad8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ad900: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ad900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ad904: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2ad904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad908: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ad908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ad90c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2AD90Cu;
    SET_GPR_U32(ctx, 31, 0x2AD914u);
    ctx->pc = 0x2AD910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD90Cu;
    // 0x2ad910: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2AD90Cu, 0x2AD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD914u;
label_2ad914:
    // 0x2ad914: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad918: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad91c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad91cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad920: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ad920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ad924: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ad924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ad928: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ad928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad92c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad930: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ad930u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ad934: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ad934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad938: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ad938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ad93c: 0xc480239c  lwc1        $f0, 0x239C($a0)
    ctx->pc = 0x2ad93cu;
    { uint32_t bits = FAST_READ32(0x3C239Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad940: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2ad940u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ad944: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad948: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad94c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ad94cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ad950: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ad950u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ad954: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ad954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad958: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ad958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad95c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ad95cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ad960: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad964: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x2ad964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ad968: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x2ad968u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ad96c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ad96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad970: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x2ad970u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ad974:
    // 0x2ad974: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ad974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad978: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ad978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ad97c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2ad97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ad980: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2AD980u;
    {
        const bool branch_taken_0x2ad980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD980u;
        // 0x2ad984: 0x732018  mult        $a0, $v1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad980) {
            ctx->pc = 0x2AD838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad838;
        }
    }
    ctx->pc = 0x2AD988u;
label_2ad988:
    // 0x2ad988: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ad988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ad98c: 0x8fb30050  lw          $s3, 0x50($sp)
    ctx->pc = 0x2ad98cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad990: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2ad990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ad994: 0x5040ff9c  beql        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2AD994u;
    {
        const bool branch_taken_0x2ad994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad994) {
            ctx->pc = 0x2AD998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD994u;
            // 0x2ad998: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad808;
        }
    }
    ctx->pc = 0x2AD99Cu;
label_2ad99c:
    // 0x2ad99c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ad99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ad9a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ad9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9a4: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2AD9A4u;
    {
        const bool branch_taken_0x2ad9a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9A4u;
        // 0x2ad9a8: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad9a4) {
            ctx->pc = 0x2ADB44u;
            goto label_2adb44;
        }
    }
    ctx->pc = 0x2AD9ACu;
    // 0x2ad9ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad9b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ad9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ad9b4: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2ad9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad9b8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2ad9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad9bc: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2ad9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad9c0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2ad9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad9c4: 0x0  nop
    ctx->pc = 0x2ad9c4u;
    // NOP
label_2ad9c8:
    // 0x2ad9c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad9cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad9d0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2ad9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ad9d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ad9d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad9d8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ad9d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad9dc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ad9dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad9e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad9e4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2ad9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ad9e8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad9ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad9f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad9f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2ad9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ad9f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2ad9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ad9fc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2ad9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ada00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ada00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ada04: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ada04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ada08: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ada08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ada0c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ada0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ada10: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ada10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ada14: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ada14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ada18: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2ADA18u;
    SET_GPR_U32(ctx, 31, 0x2ADA20u);
    ctx->pc = 0x2ADA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA18u;
    // 0x2ada1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2ADA18u, 0x2ADA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA20u;
label_2ada20:
    // 0x2ada20: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ada20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ada24: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ada24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ada28: 0x0  nop
    ctx->pc = 0x2ada28u;
    // NOP
    // 0x2ada2c: 0x0  nop
    ctx->pc = 0x2ada2cu;
    // NOP
    // 0x2ada30: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x2ada30u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2ada34: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ada34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ada38: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2ada38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ada3c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ada3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ada40: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ada40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ada44: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ada44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ada48: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ada48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ada4c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ada4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ada50: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ada50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ada54: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2ada54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ada58: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2ada58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ada5c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2ada5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ada60: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ada60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ada64: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2ada64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ada68: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2ada68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2ada6c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x2ada6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ada70: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2ada70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ada74: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2ada74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2ada78: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2ada78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ada7c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2ada7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2ada80: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x2ada80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ada84: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2ada84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ada88: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2ada88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2ada8c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ada8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ada90: 0x0  nop
    ctx->pc = 0x2ada90u;
    // NOP
    // 0x2ada94: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2ada94u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x2ada98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ada98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ada9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ada9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2adaa0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2adaa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2adaa4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2adaa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adaa8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2adaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adaac: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2adaacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2adab0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2adab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2adab4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2adab4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2adab8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2adab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2adabc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2adabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adac0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2adac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2adac4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2adac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adac8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2adac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adacc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2adaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adad0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2adad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adad4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2adad4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2adad8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2adad8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2adadc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2adadcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2adae0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2adae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2adae4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2adae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2adae8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2adae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2adaec: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2adaecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2adaf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adaf4: 0x90620048  lbu         $v0, 0x48($v1)
    ctx->pc = 0x2adaf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2adaf8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADAF8u;
    {
        const bool branch_taken_0x2adaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adaf8) {
            ctx->pc = 0x2ADAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADAF8u;
            // 0x2adafc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB14u;
            goto label_2adb14;
        }
    }
    ctx->pc = 0x2ADB00u;
    // 0x2adb00: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2adb00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2adb04: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2adb04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2adb08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2adb08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2adb0c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2adb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adb10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2adb14:
    // 0x2adb14: 0x90620048  lbu         $v0, 0x48($v1)
    ctx->pc = 0x2adb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2adb18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADB18u;
    {
        const bool branch_taken_0x2adb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb18) {
            ctx->pc = 0x2ADB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADB18u;
            // 0x2adb1c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB34u;
            goto label_2adb34;
        }
    }
    ctx->pc = 0x2ADB20u;
    // 0x2adb20: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2adb20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2adb24: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2adb24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adb28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2adb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2adb2c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2adb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adb30: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2adb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2adb34:
    // 0x2adb34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2adb34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2adb38: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2adb3c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2ADB3Cu;
    {
        const bool branch_taken_0x2adb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB3Cu;
        // 0x2adb40: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb3c) {
            ctx->pc = 0x2AD9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad9c8;
        }
    }
    ctx->pc = 0x2ADB44u;
label_2adb44:
    // 0x2adb44: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2adb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2adb48: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2ADB48u;
    {
        const bool branch_taken_0x2adb48 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2ADB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB48u;
        // 0x2adb4c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb48) {
            ctx->pc = 0x2ADC34u;
            goto label_2adc34;
        }
    }
    ctx->pc = 0x2ADB50u;
    // 0x2adb50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2adb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2adb54: 0x0  nop
    ctx->pc = 0x2adb54u;
    // NOP
label_2adb58:
    // 0x2adb58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2adb58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb5c: 0x4600030  bltz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2ADB5Cu;
    {
        const bool branch_taken_0x2adb5c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2ADB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB5Cu;
        // 0x2adb60: 0x26b60001  addiu       $s6, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb5c) {
            ctx->pc = 0x2ADC20u;
            goto label_2adc20;
        }
    }
    ctx->pc = 0x2ADB64u;
    // 0x2adb64: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x2adb64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2adb68: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2adb68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adb6c: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x2adb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2adb70:
    // 0x2adb70: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2adb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2adb74: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x2adb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2adb78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2adb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2adb7c: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x2adb7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2adb80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2adb84: 0x90620048  lbu         $v0, 0x48($v1)
    ctx->pc = 0x2adb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2adb88: 0x10570020  beq         $v0, $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ADB88u;
    {
        const bool branch_taken_0x2adb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2ADB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB88u;
        // 0x2adb8c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb88) {
            ctx->pc = 0x2ADC0Cu;
            goto label_2adc0c;
        }
    }
    ctx->pc = 0x2ADB90u;
    // 0x2adb90: 0x24700030  addiu       $s0, $v1, 0x30
    ctx->pc = 0x2adb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2adb94: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2adb94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2adb98: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2ADB98u;
    SET_GPR_U32(ctx, 31, 0x2ADBA0u);
    ctx->pc = 0x2ADB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB98u;
    // 0x2adb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2ADB98u, 0x2ADBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBA0u;
label_2adba0:
    // 0x2adba0: 0xc66123a0  lwc1        $f1, 0x23A0($s3)
    ctx->pc = 0x2adba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 9120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adba4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2adba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2adba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2adba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adbac: 0x0  nop
    ctx->pc = 0x2adbacu;
    // NOP
    // 0x2adbb0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2ADBB0u;
    {
        const bool branch_taken_0x2adbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adbb0) {
            ctx->pc = 0x2ADBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADBB0u;
            // 0x2adbb4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC10u;
            goto label_2adc10;
        }
    }
    ctx->pc = 0x2ADBB8u;
    // 0x2adbb8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2ADBB8u;
    SET_GPR_U32(ctx, 31, 0x2ADBC0u);
    ctx->pc = 0x2ADBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBB8u;
    // 0x2adbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2ADBB8u, 0x2ADBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBC0u;
label_2adbc0:
    // 0x2adbc0: 0x0  nop
    ctx->pc = 0x2adbc0u;
    // NOP
    // 0x2adbc4: 0x0  nop
    ctx->pc = 0x2adbc4u;
    // NOP
    // 0x2adbc8: 0x46000044  c1          0x44
    ctx->pc = 0x2adbc8u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2adbcc: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2adbccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adbd0: 0x0  nop
    ctx->pc = 0x2adbd0u;
    // NOP
    // 0x2adbd4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADBD4u;
    {
        const bool branch_taken_0x2adbd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adbd4) {
            ctx->pc = 0x2ADBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADBD4u;
            // 0x2adbd8: 0xc66023a0  lwc1        $f0, 0x23A0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 9120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBECu;
            goto label_2adbec;
        }
    }
    ctx->pc = 0x2ADBDCu;
    // 0x2adbdc: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2ADBDCu;
    SET_GPR_U32(ctx, 31, 0x2ADBE4u);
    ctx->pc = 0x2ADBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBDCu;
    // 0x2adbe0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2ADBDCu, 0x2ADBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBE4u;
label_2adbe4:
    // 0x2adbe4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2adbe4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2adbe8: 0xc66023a0  lwc1        $f0, 0x23A0($s3)
    ctx->pc = 0x2adbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 9120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2adbec:
    // 0x2adbec: 0x0  nop
    ctx->pc = 0x2adbecu;
    // NOP
    // 0x2adbf0: 0x0  nop
    ctx->pc = 0x2adbf0u;
    // NOP
    // 0x2adbf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2adbf4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2adbf8: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x2adbf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2adbfc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2adbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2adc00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2adc00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2adc04: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2adc04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2adc08: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x2adc08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2adc0c:
    // 0x2adc0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2adc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2adc10:
    // 0x2adc10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2adc14: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2adc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2adc18: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2ADC18u;
    {
        const bool branch_taken_0x2adc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC18u;
        // 0x2adc1c: 0x752018  mult        $a0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc18) {
            ctx->pc = 0x2ADB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adb70;
        }
    }
    ctx->pc = 0x2ADC20u;
label_2adc20:
    // 0x2adc20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2adc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2adc24: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x2adc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc28: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x2adc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2adc2c: 0x5040ffca  beql        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2ADC2Cu;
    {
        const bool branch_taken_0x2adc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc2c) {
            ctx->pc = 0x2ADC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC2Cu;
            // 0x2adc30: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adb58;
        }
    }
    ctx->pc = 0x2ADC34u;
label_2adc34:
    // 0x2adc34: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2adc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2adc38: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2adc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2adc3c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2adc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2adc40: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2adc40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2adc44: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2adc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2adc48: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2adc48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2adc4c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2adc4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2adc50: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2adc50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2adc54: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2adc54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2adc58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2adc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2adc5c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2adc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2adc60: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2adc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2adc64: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC64u;
        // 0x2adc68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADC6Cu;
    // 0x2adc6c: 0x0  nop
    ctx->pc = 0x2adc6cu;
    // NOP
    ctx->pc = 0x2adc70u;
}
