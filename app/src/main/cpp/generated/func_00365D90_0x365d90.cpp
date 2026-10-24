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

// Function: func_00365D90
// Address: 0x365d90 - 0x365eb0
void func_00365D90_0x365d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00365D90_0x365d90");
#endif

    switch (ctx->pc) {
        case 0x365e10u: goto label_365e10;
        case 0x365e40u: goto label_365e40;
        case 0x365e60u: goto label_365e60;
        default: break;
    }

    ctx->pc = 0x365d90u;

    // 0x365d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x365d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x365d94: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x365d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x365d98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x365d98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365d9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x365d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x365da0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x365da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x365da4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x365da4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365da8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x365da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x365dac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x365dacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x365db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x365db4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x365db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x365db8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x365db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x365dbc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x365dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x365dc0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x365dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x365dc4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x365dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x365dc8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x365dcc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x365dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x365dd0: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x365dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x365dd4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x365dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x365dd8: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x365dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x365ddc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x365ddcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x365de0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x365de0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x365de4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x365de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x365de8: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x365de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x365dec: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x365decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x365df0: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x365df0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x365df4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x365df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x365df8: 0x4b103  sra         $s6, $a0, 4
    ctx->pc = 0x365df8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 4));
    // 0x365dfc: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x365DFCu;
    {
        const bool branch_taken_0x365dfc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x365E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DFCu;
        // 0x365e00: 0x8ef4000c  lw          $s4, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365dfc) {
            ctx->pc = 0x365E7Cu;
            goto label_365e7c;
        }
    }
    ctx->pc = 0x365E04u;
    // 0x365e04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x365E04u;
    {
        const bool branch_taken_0x365e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E04u;
        // 0x365e08: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e04) {
            ctx->pc = 0x365E18u;
            goto label_365e18;
        }
    }
    ctx->pc = 0x365E0Cu;
    // 0x365e0c: 0x0  nop
    ctx->pc = 0x365e0cu;
    // NOP
label_365e10:
    // 0x365e10: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x365e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x365e14: 0x0  nop
    ctx->pc = 0x365e14u;
    // NOP
label_365e18:
    // 0x365e18: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x365e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x365e1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x365e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x365e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x365e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x365e24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x365e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x365e28: 0x1ac0000f  blez        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x365E28u;
    {
        const bool branch_taken_0x365e28 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x365E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E28u;
        // 0x365e2c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e28) {
            ctx->pc = 0x365E68u;
            goto label_365e68;
        }
    }
    ctx->pc = 0x365E30u;
    // 0x365e30: 0x158980  sll         $s1, $s5, 6
    ctx->pc = 0x365e30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x365e34: 0x149900  sll         $s3, $s4, 4
    ctx->pc = 0x365e34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x365e38: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x365e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e3c: 0x0  nop
    ctx->pc = 0x365e3cu;
    // NOP
label_365e40:
    // 0x365e40: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x365e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x365e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e48: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x365e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365e4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x365e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365e50: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x365e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365e54: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x365e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x365e58: 0xc0d8d88  jal         func_363620
    ctx->pc = 0x365E58u;
    SET_GPR_U32(ctx, 31, 0x365E60u);
    ctx->pc = 0x365E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365E58u;
    // 0x365e5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363620u, 0x365E58u, 0x365E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E60u;
label_365e60:
    // 0x365e60: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x365E60u;
    {
        const bool branch_taken_0x365e60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x365E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E60u;
        // 0x365e64: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365e60) {
            ctx->pc = 0x365E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e40;
        }
    }
    ctx->pc = 0x365E68u;
label_365e68:
    // 0x365e68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x365e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x365e6c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x365e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x365e70: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x365e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x365e74: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x365E74u;
    {
        const bool branch_taken_0x365e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e74) {
            ctx->pc = 0x365E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365E74u;
            // 0x365e78: 0x8fc50000  lw          $a1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e10;
        }
    }
    ctx->pc = 0x365E7Cu;
label_365e7c:
    // 0x365e7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x365e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365e80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x365e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365e84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x365e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365e88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x365e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365e8c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x365e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365e90: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x365e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e94: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x365e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365e98: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x365e98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365e9c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x365e9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x365ea0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x365ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x365ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x365EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EA4u;
        // 0x365ea8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365EACu;
    // 0x365eac: 0x0  nop
    ctx->pc = 0x365eacu;
    // NOP
    ctx->pc = 0x365eb0u;
}
