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

// Function: func_00357870
// Address: 0x357870 - 0x357910
void func_00357870_0x357870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357870_0x357870");
#endif

    switch (ctx->pc) {
        case 0x3578e8u: goto label_3578e8;
        case 0x3578f8u: goto label_3578f8;
        default: break;
    }

    ctx->pc = 0x357870u;

    // 0x357870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x357874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x357878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35787c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35787cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357888: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x357888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35788c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35788Cu;
    {
        const bool branch_taken_0x35788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x357890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35788Cu;
        // 0x357890: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35788c) {
            ctx->pc = 0x3578D8u;
            goto label_3578d8;
        }
    }
    ctx->pc = 0x357894u;
    // 0x357894: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x357894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x357898: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357898u;
    {
        const bool branch_taken_0x357898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357898u;
        // 0x35789c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357898) {
            ctx->pc = 0x3578B8u;
            goto label_3578b8;
        }
    }
    ctx->pc = 0x3578A0u;
    // 0x3578a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3578a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3578A4u;
    {
        const bool branch_taken_0x3578a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3578A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578A4u;
        // 0x3578a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578a4) {
            ctx->pc = 0x3578D0u;
            goto label_3578d0;
        }
    }
    ctx->pc = 0x3578ACu;
    // 0x3578ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3578ACu;
    {
        const bool branch_taken_0x3578ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3578B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578ACu;
        // 0x3578b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578ac) {
            ctx->pc = 0x357900u;
            goto label_357900;
        }
    }
    ctx->pc = 0x3578B4u;
    // 0x3578b4: 0x0  nop
    ctx->pc = 0x3578b4u;
    // NOP
label_3578b8:
    // 0x3578b8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3578B8u;
    {
        const bool branch_taken_0x3578b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3578BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578B8u;
        // 0x3578bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578b8) {
            ctx->pc = 0x3578E0u;
            goto label_3578e0;
        }
    }
    ctx->pc = 0x3578C0u;
    // 0x3578c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3578C0u;
    {
        const bool branch_taken_0x3578c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3578C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578C0u;
        // 0x3578c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578c0) {
            ctx->pc = 0x3578E0u;
            goto label_3578e0;
        }
    }
    ctx->pc = 0x3578C8u;
    // 0x3578c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3578C8u;
    {
        const bool branch_taken_0x3578c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3578CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578C8u;
        // 0x3578cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578c8) {
            ctx->pc = 0x357900u;
            goto label_357900;
        }
    }
    ctx->pc = 0x3578D0u;
label_3578d0:
    // 0x3578d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3578D0u;
    {
        const bool branch_taken_0x3578d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3578D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578D0u;
        // 0x3578d4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578d0) {
            ctx->pc = 0x3578F8u;
            goto label_3578f8;
        }
    }
    ctx->pc = 0x3578D8u;
label_3578d8:
    // 0x3578d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3578D8u;
    {
        const bool branch_taken_0x3578d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3578DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578D8u;
        // 0x3578dc: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578d8) {
            ctx->pc = 0x3578F8u;
            goto label_3578f8;
        }
    }
    ctx->pc = 0x3578E0u;
label_3578e0:
    // 0x3578e0: 0xc0d5e62  jal         func_357988
    ctx->pc = 0x3578E0u;
    SET_GPR_U32(ctx, 31, 0x3578E8u);
    ctx->pc = 0x3578E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3578E0u;
    // 0x3578e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357988u, 0x3578E0u, 0x3578E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578E8u;
label_3578e8:
    // 0x3578e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3578E8u;
    {
        const bool branch_taken_0x3578e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3578ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578E8u;
        // 0x3578ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578e8) {
            ctx->pc = 0x3578F8u;
            goto label_3578f8;
        }
    }
    ctx->pc = 0x3578F0u;
    // 0x3578f0: 0xc0d6250  jal         func_358940
    ctx->pc = 0x3578F0u;
    SET_GPR_U32(ctx, 31, 0x3578F8u);
    ctx->pc = 0x3578F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3578F0u;
    // 0x3578f4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358940u, 0x3578F0u, 0x3578F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578F8u;
label_3578f8:
    // 0x3578f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3578f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3578fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357900:
    // 0x357900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357908: 0x3e00008  jr          $ra
    ctx->pc = 0x357908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357908u;
        // 0x35790c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357910u;
}
