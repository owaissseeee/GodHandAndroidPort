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

// Function: func_00347F20
// Address: 0x347f20 - 0x347fe0
void func_00347F20_0x347f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347F20_0x347f20");
#endif

    switch (ctx->pc) {
        case 0x347f60u: goto label_347f60;
        case 0x347f78u: goto label_347f78;
        case 0x347f9cu: goto label_347f9c;
        case 0x347fb0u: goto label_347fb0;
        default: break;
    }

    ctx->pc = 0x347f20u;

    // 0x347f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347f34: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x347f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x347f38: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x347F38u;
    {
        const bool branch_taken_0x347f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f38) {
            ctx->pc = 0x347F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F38u;
            // 0x347f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347FCCu;
            goto label_347fcc;
        }
    }
    ctx->pc = 0x347F40u;
    // 0x347f40: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x347f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x347f44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x347F44u;
    {
        const bool branch_taken_0x347f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F44u;
        // 0x347f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f44) {
            ctx->pc = 0x347FC8u;
            goto label_347fc8;
        }
    }
    ctx->pc = 0x347F4Cu;
    // 0x347f4c: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x347f50: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x347F50u;
    {
        const bool branch_taken_0x347f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347f50) {
            ctx->pc = 0x347F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F50u;
            // 0x347f54: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F88u;
            goto label_347f88;
        }
    }
    ctx->pc = 0x347F58u;
    // 0x347f58: 0xc0d1a12  jal         func_346848
    ctx->pc = 0x347F58u;
    SET_GPR_U32(ctx, 31, 0x347F60u);
    ctx->pc = 0x346848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346848u, 0x347F58u, 0x347F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F60u;
label_347f60:
    // 0x347f60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x347f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347f68: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347F68u;
    {
        const bool branch_taken_0x347f68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x347f68) {
            ctx->pc = 0x347F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F68u;
            // 0x347f6c: 0x8e0302e8  lw          $v1, 0x2E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F84u;
            goto label_347f84;
        }
    }
    ctx->pc = 0x347F70u;
    // 0x347f70: 0xc0d2026  jal         func_348098
    ctx->pc = 0x347F70u;
    SET_GPR_U32(ctx, 31, 0x347F78u);
    ctx->pc = 0x347F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F70u;
    // 0x347f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348098u, 0x347F70u, 0x347F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F78u;
label_347f78:
    // 0x347f78: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x347F78u;
    {
        const bool branch_taken_0x347f78 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x347F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F78u;
        // 0x347f7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f78) {
            ctx->pc = 0x347FC8u;
            goto label_347fc8;
        }
    }
    ctx->pc = 0x347F80u;
    // 0x347f80: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x347f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_347f84:
    // 0x347f84: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x347f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_347f88:
    // 0x347f88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x347f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x347f8c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x347F8Cu;
    {
        const bool branch_taken_0x347f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f8c) {
            ctx->pc = 0x347F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347F8Cu;
            // 0x347f90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347FCCu;
            goto label_347fcc;
        }
    }
    ctx->pc = 0x347F94u;
    // 0x347f94: 0xc0d1a2e  jal         func_3468B8
    ctx->pc = 0x347F94u;
    SET_GPR_U32(ctx, 31, 0x347F9Cu);
    ctx->pc = 0x347F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F94u;
    // 0x347f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3468B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3468B8u, 0x347F94u, 0x347F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F9Cu;
label_347f9c:
    // 0x347f9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347fa0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x347FA0u;
    {
        const bool branch_taken_0x347fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x347fa0) {
            ctx->pc = 0x347FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347FA0u;
            // 0x347fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347FB4u;
            goto label_347fb4;
        }
    }
    ctx->pc = 0x347FA8u;
    // 0x347fa8: 0xc0d1ff8  jal         func_347FE0
    ctx->pc = 0x347FA8u;
    SET_GPR_U32(ctx, 31, 0x347FB0u);
    ctx->pc = 0x347FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FA8u;
    // 0x347fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347FE0u, 0x347FA8u, 0x347FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FB0u;
label_347fb0:
    // 0x347fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347fb4:
    // 0x347fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347fc0: 0x80d2056  j           func_348158
    ctx->pc = 0x347FC0u;
    ctx->pc = 0x347FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FC0u;
    // 0x347fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348158u, 0x347FC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347FC8u;
label_347fc8:
    // 0x347fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_347fcc:
    // 0x347fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x347FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FD4u;
        // 0x347fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347FDCu;
    // 0x347fdc: 0x0  nop
    ctx->pc = 0x347fdcu;
    // NOP
    ctx->pc = 0x347fe0u;
}
