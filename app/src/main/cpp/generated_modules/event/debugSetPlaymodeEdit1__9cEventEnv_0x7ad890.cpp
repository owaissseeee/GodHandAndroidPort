#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: debugSetPlaymodeEdit1__9cEventEnv
// Address: 0x7ad890 - 0x7ad9b0
void debugSetPlaymodeEdit1__9cEventEnv_0x7ad890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugSetPlaymodeEdit1__9cEventEnv_0x7ad890");
#endif

    switch (ctx->pc) {
        case 0x7ad8c8u: goto label_7ad8c8;
        case 0x7ad8d4u: goto label_7ad8d4;
        default: break;
    }

    ctx->pc = 0x7ad890u;

    // 0x7ad890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ad890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ad894: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7ad894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7ad898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7ad898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7ad89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ad89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad8a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7ad8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7ad8a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7ad8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad8a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7ad8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7ad8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad8b0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x7ad8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x7ad8b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad8b8: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x7AD8B8u;
    {
        const bool branch_taken_0x7ad8b8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD8B8u;
        // 0x7ad8bc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad8b8) {
            ctx->pc = 0x7AD990u;
            goto label_7ad990;
        }
    }
    ctx->pc = 0x7AD8C0u;
    // 0x7ad8c0: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7ad8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7ad8c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7ad8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ad8c8:
    // 0x7ad8c8: 0x26645248  addiu       $a0, $s3, 0x5248
    ctx->pc = 0x7ad8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21064));
    // 0x7ad8cc: 0xc1eb3c8  jal         func_7ACF20
    ctx->pc = 0x7AD8CCu;
    SET_GPR_U32(ctx, 31, 0x7AD8D4u);
    ctx->pc = 0x7AD8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD8CCu;
    // 0x7ad8d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF20u, 0x7AD8CCu, 0x7AD8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD8D4u;
label_7ad8d4:
    // 0x7ad8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ad8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad8d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ad8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad8dc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AD8DCu;
    {
        const bool branch_taken_0x7ad8dc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD8DCu;
        // 0x7ad8e0: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad8dc) {
            ctx->pc = 0x7AD8F8u;
            goto label_7ad8f8;
        }
    }
    ctx->pc = 0x7AD8E4u;
    // 0x7ad8e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x7ad8e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad8e8: 0x0  nop
    ctx->pc = 0x7ad8e8u;
    // NOP
    // 0x7ad8ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ad8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ad8f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7AD8F0u;
    {
        const bool branch_taken_0x7ad8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD8F0u;
        // 0x7ad8f4: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad8f0) {
            ctx->pc = 0x7AD918u;
            goto label_7ad918;
        }
    }
    ctx->pc = 0x7AD8F8u;
label_7ad8f8:
    // 0x7ad8f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x7ad8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x7ad8fc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x7ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x7ad900: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ad900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ad904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7ad904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad908: 0x0  nop
    ctx->pc = 0x7ad908u;
    // NOP
    // 0x7ad90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ad90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ad910: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x7ad910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x7ad914: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x7ad914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_7ad918:
    // 0x7ad918: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad91c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7ad91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7ad920: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AD920u;
    {
        const bool branch_taken_0x7ad920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x7ad920) {
            ctx->pc = 0x7AD954u;
            goto label_7ad954;
        }
    }
    ctx->pc = 0x7AD928u;
    // 0x7ad928: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ad928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad92c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x7ad92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x7ad930: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad934: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x7ad934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x7ad938: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7ad938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad93c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x7ad93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x7ad940: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x7ad940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x7ad944: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x7ad944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ad948: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad94c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7ad94cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7ad950: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_7ad954:
    // 0x7ad954: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7AD954u;
    {
        const bool branch_taken_0x7ad954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad954) {
            ctx->pc = 0x7AD958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD954u;
            // 0x7ad958: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD980u;
            goto label_7ad980;
        }
    }
    ctx->pc = 0x7AD95Cu;
    // 0x7ad95c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x7ad95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x7ad960: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x7ad960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ad964: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7AD964u;
    {
        const bool branch_taken_0x7ad964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad964) {
            ctx->pc = 0x7AD968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD964u;
            // 0x7ad968: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD96Cu;
            goto label_7ad96c;
        }
    }
    ctx->pc = 0x7AD96Cu;
label_7ad96c:
    // 0x7ad96c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x7ad96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x7ad970: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x7ad970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x7ad974: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7AD974u;
    {
        const bool branch_taken_0x7ad974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad974) {
            ctx->pc = 0x7AD978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD974u;
            // 0x7ad978: 0xae110040  sw          $s1, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD97Cu;
            goto label_7ad97c;
        }
    }
    ctx->pc = 0x7AD97Cu;
label_7ad97c:
    // 0x7ad97c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7ad980:
    // 0x7ad980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7ad980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7ad984: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x7ad984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ad988: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x7AD988u;
    {
        const bool branch_taken_0x7ad988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD988u;
        // 0x7ad98c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad988) {
            ctx->pc = 0x7AD8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad8c8;
        }
    }
    ctx->pc = 0x7AD990u;
label_7ad990:
    // 0x7ad990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7ad990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ad994: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7ad994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ad998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7ad998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ad99c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7ad99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ad9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD9A4u;
        // 0x7ad9a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD9ACu;
    // 0x7ad9ac: 0x0  nop
    ctx->pc = 0x7ad9acu;
    // NOP
    ctx->pc = 0x7ad9b0u;
}
} // namespace gh_event
