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

// Function: func_00350BE8
// Address: 0x350be8 - 0x350c58
void func_00350BE8_0x350be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350BE8_0x350be8");
#endif

    switch (ctx->pc) {
        case 0x350c04u: goto label_350c04;
        default: break;
    }

    ctx->pc = 0x350be8u;

    // 0x350be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350bfc: 0xc0d553a  jal         func_3554E8
    ctx->pc = 0x350BFCu;
    SET_GPR_U32(ctx, 31, 0x350C04u);
    ctx->pc = 0x350C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BFCu;
    // 0x350c00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554E8u, 0x350BFCu, 0x350C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C04u;
label_350c04:
    // 0x350c04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x350C04u;
    {
        const bool branch_taken_0x350c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C04u;
        // 0x350c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c04) {
            ctx->pc = 0x350C40u;
            goto label_350c40;
        }
    }
    ctx->pc = 0x350C0Cu;
    // 0x350c0c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x350C0Cu;
    {
        const bool branch_taken_0x350c0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C0Cu;
        // 0x350c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c0c) {
            ctx->pc = 0x350C40u;
            goto label_350c40;
        }
    }
    ctx->pc = 0x350C14u;
    // 0x350c14: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x350c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x350c18: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x350C18u;
    {
        const bool branch_taken_0x350c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350c18) {
            ctx->pc = 0x350C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C18u;
            // 0x350c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350C40u;
            goto label_350c40;
        }
    }
    ctx->pc = 0x350C20u;
    // 0x350c20: 0x56230007  bnel        $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350C20u;
    {
        const bool branch_taken_0x350c20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x350c20) {
            ctx->pc = 0x350C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350C20u;
            // 0x350c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350C40u;
            goto label_350c40;
        }
    }
    ctx->pc = 0x350C28u;
    // 0x350c28: 0x8e03096c  lw          $v1, 0x96C($s0)
    ctx->pc = 0x350c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x350c2c: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x350c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x350c30: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x350c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x350c34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350C34u;
    {
        const bool branch_taken_0x350c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C34u;
        // 0x350c38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c34) {
            ctx->pc = 0x350C44u;
            goto label_350c44;
        }
    }
    ctx->pc = 0x350C3Cu;
    // 0x350c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350c40:
    // 0x350c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350c44:
    // 0x350c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x350C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C4Cu;
        // 0x350c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C54u;
    // 0x350c54: 0x0  nop
    ctx->pc = 0x350c54u;
    // NOP
    ctx->pc = 0x350c58u;
}
