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

// Function: func_0013E0B0
// Address: 0x13e0b0 - 0x13e260
void func_0013E0B0_0x13e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E0B0_0x13e0b0");
#endif

    switch (ctx->pc) {
        case 0x13e0f0u: goto label_13e0f0;
        case 0x13e118u: goto label_13e118;
        case 0x13e120u: goto label_13e120;
        case 0x13e168u: goto label_13e168;
        case 0x13e210u: goto label_13e210;
        default: break;
    }

    ctx->pc = 0x13e0b0u;

    // 0x13e0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13e0b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13e0b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x13e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x13e0bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13e0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x13e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x13e0c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13e0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x13e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x13e0cc: 0x2696033c  addiu       $s6, $s4, 0x33C
    ctx->pc = 0x13e0ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 828));
    // 0x13e0d0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x13e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x13e0d4: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x13e0d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13e0d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x13e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x13e0dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x13e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x13e0e0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x13e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x13e0e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x13e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x13e0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e0ec: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x13e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_13e0f0:
    // 0x13e0f0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x13e0f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e0f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e0f8: 0x10430049  beq         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x13E0F8u;
    {
        const bool branch_taken_0x13e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0F8u;
        // 0x13e0fc: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0f8) {
            ctx->pc = 0x13E220u;
            goto label_13e220;
        }
    }
    ctx->pc = 0x13E100u;
    // 0x13e100: 0x27e1018  mult        $v0, $s3, $fp
    ctx->pc = 0x13e100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13e104: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13e104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e108: 0x26920310  addiu       $s2, $s4, 0x310
    ctx->pc = 0x13e108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
    // 0x13e10c: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x13e110: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x13e110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x13e114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e118:
    // 0x13e118: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E118u;
    SET_GPR_U32(ctx, 31, 0x13E120u);
    ctx->pc = 0x13E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E118u;
    // 0x13e11c: 0x2912021  addu        $a0, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E118u, 0x13E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E120u;
label_13e120:
    // 0x13e120: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e124: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13e128: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13e12c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13e12cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e130: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13e130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13e134: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x13e138: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E138u;
    {
        const bool branch_taken_0x13e138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E138u;
        // 0x13e13c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e138) {
            ctx->pc = 0x13E118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e118;
        }
    }
    ctx->pc = 0x13E140u;
    // 0x13e140: 0x2d32021  addu        $a0, $s6, $s3
    ctx->pc = 0x13e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x13e144: 0x96a3e010  lhu         $v1, -0x1FF0($s5)
    ctx->pc = 0x13e144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294959120)));
    // 0x13e148: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x13e148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13e14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e150: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13e150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e154: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E154u;
    {
        const bool branch_taken_0x13e154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E154u;
        // 0x13e158: 0x8e880310  lw          $t0, 0x310($s4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e154) {
            ctx->pc = 0x13E190u;
            goto label_13e190;
        }
    }
    ctx->pc = 0x13E15Cu;
    // 0x13e15c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13e160: 0x2445e010  addiu       $a1, $v0, -0x1FF0
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x13e164: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13e168:
    // 0x13e168: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x13e168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e16c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13e170: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x13e170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13e174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E174u;
    {
        const bool branch_taken_0x13e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E174u;
        // 0x13e178: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e174) {
            ctx->pc = 0x13E190u;
            goto label_13e190;
        }
    }
    ctx->pc = 0x13E17Cu;
    // 0x13e17c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x13e17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e180: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x13e180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e184: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13e184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e188: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E188u;
    {
        const bool branch_taken_0x13e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E188u;
        // 0x13e18c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e188) {
            ctx->pc = 0x13E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e168;
        }
    }
    ctx->pc = 0x13E190u;
label_13e190:
    // 0x13e190: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13e194: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13e198: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x13e198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13e19c: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x13e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x13e1a0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13e1a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13e1a8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x13e1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13e1ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e1b0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13e1b4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x13e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e1b8: 0x2442dff8  addiu       $v0, $v0, -0x2008
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959096));
    // 0x13e1bc: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x13e1bcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e1c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e1c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13e1c8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x13e1c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e1cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e1d0: 0x27e2018  mult        $a0, $s3, $fp
    ctx->pc = 0x13e1d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13e1d4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e1d8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13e1dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x13e1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13e1e0: 0x0  nop
    ctx->pc = 0x13e1e0u;
    // NOP
    // 0x13e1e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x13e1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x13e1e8: 0xc501003c  lwc1        $f1, 0x3C($t0)
    ctx->pc = 0x13e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e1ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13e1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13e1f0: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x13e1f4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x13e1f8: 0x0  nop
    ctx->pc = 0x13e1f8u;
    // NOP
    // 0x13e1fc: 0x0  nop
    ctx->pc = 0x13e1fcu;
    // NOP
    // 0x13e200: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x13e200u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x13e204: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13e204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13e208: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13E208u;
    SET_GPR_U32(ctx, 31, 0x13E210u);
    ctx->pc = 0x13E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E208u;
    // 0x13e20c: 0xe501003c  swc1        $f1, 0x3C($t0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13E208u, 0x13E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E210u;
label_13e210:
    // 0x13e210: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x13e214: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x13e214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e21c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x13e21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_13e220:
    // 0x13e220: 0x32f3ffff  andi        $s3, $s7, 0xFFFF
    ctx->pc = 0x13e220u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x13e224: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x13e224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e228: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x13E228u;
    {
        const bool branch_taken_0x13e228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E228u;
        // 0x13e22c: 0x2d31821  addu        $v1, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e228) {
            ctx->pc = 0x13E0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e0f0;
        }
    }
    ctx->pc = 0x13E230u;
    // 0x13e230: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x13e230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13e234: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x13e234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13e238: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x13e238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13e23c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x13e23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e240: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13e240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e244: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x13e244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e248: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x13e248u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e24c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x13e24cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e250: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x13e250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e258: 0x3e00008  jr          $ra
    ctx->pc = 0x13E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E258u;
        // 0x13e25c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E260u;
}
