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

// Function: func_0033F5B8
// Address: 0x33f5b8 - 0x33f690
void func_0033F5B8_0x33f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F5B8_0x33f5b8");
#endif

    switch (ctx->pc) {
        case 0x33f5ccu: goto label_33f5cc;
        case 0x33f5fcu: goto label_33f5fc;
        case 0x33f608u: goto label_33f608;
        case 0x33f614u: goto label_33f614;
        case 0x33f620u: goto label_33f620;
        case 0x33f62cu: goto label_33f62c;
        case 0x33f638u: goto label_33f638;
        case 0x33f644u: goto label_33f644;
        case 0x33f650u: goto label_33f650;
        case 0x33f65cu: goto label_33f65c;
        default: break;
    }

    ctx->pc = 0x33f5b8u;

    // 0x33f5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f5c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f5c4: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x33F5C4u;
    SET_GPR_U32(ctx, 31, 0x33F5CCu);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x33F5C4u, 0x33F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F5CCu;
label_33f5cc:
    // 0x33f5cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33f5d0: 0x2450b844  addiu       $s0, $v0, -0x47BC
    ctx->pc = 0x33f5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948932));
    // 0x33f5d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB844u));
    // 0x33f5d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5D8u;
    {
        const bool branch_taken_0x33f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5D8u;
        // 0x33f5dc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5d8) {
            ctx->pc = 0x33F5F0u;
            goto label_33f5f0;
        }
    }
    ctx->pc = 0x33F5E0u;
    // 0x33f5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f5e4: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x33F5E4u;
    ctx->pc = 0x33F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F5E4u;
    // 0x33f5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x33F5E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F5ECu;
    // 0x33f5ec: 0x0  nop
    ctx->pc = 0x33f5ecu;
    // NOP
label_33f5f0:
    // 0x33f5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f5f4: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x33F5F4u;
    SET_GPR_U32(ctx, 31, 0x33F5FCu);
    ctx->pc = 0x33F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F5F4u;
    // 0x33f5f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x33F5F4u, 0x33F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F5FCu;
label_33f5fc:
    // 0x33f5fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f600: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x33F600u;
    SET_GPR_U32(ctx, 31, 0x33F608u);
    ctx->pc = 0x33F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F600u;
    // 0x33f604: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x33F600u, 0x33F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F608u;
label_33f608:
    // 0x33f608: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f60c: 0xc0ca30c  jal         func_328C30
    ctx->pc = 0x33F60Cu;
    SET_GPR_U32(ctx, 31, 0x33F614u);
    ctx->pc = 0x33F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F60Cu;
    // 0x33f610: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C30u, 0x33F60Cu, 0x33F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F614u;
label_33f614:
    // 0x33f614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f618: 0xc0ca2e2  jal         func_328B88
    ctx->pc = 0x33F618u;
    SET_GPR_U32(ctx, 31, 0x33F620u);
    ctx->pc = 0x33F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F618u;
    // 0x33f61c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B88u, 0x33F618u, 0x33F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F620u;
label_33f620:
    // 0x33f620: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33f624: 0xc0c9074  jal         func_3241D0
    ctx->pc = 0x33F624u;
    SET_GPR_U32(ctx, 31, 0x33F62Cu);
    ctx->pc = 0x33F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F624u;
    // 0x33f628: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3241D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3241D0u, 0x33F624u, 0x33F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F62Cu;
label_33f62c:
    // 0x33f62c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33f630: 0xc0ca2e2  jal         func_328B88
    ctx->pc = 0x33F630u;
    SET_GPR_U32(ctx, 31, 0x33F638u);
    ctx->pc = 0x33F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F630u;
    // 0x33f634: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B88u, 0x33F630u, 0x33F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F638u;
label_33f638:
    // 0x33f638: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x33f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33f63c: 0xc0ca30c  jal         func_328C30
    ctx->pc = 0x33F63Cu;
    SET_GPR_U32(ctx, 31, 0x33F644u);
    ctx->pc = 0x33F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F63Cu;
    // 0x33f640: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C30u, 0x33F63Cu, 0x33F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F644u;
label_33f644:
    // 0x33f644: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33f648: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x33F648u;
    SET_GPR_U32(ctx, 31, 0x33F650u);
    ctx->pc = 0x33F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F648u;
    // 0x33f64c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x33F648u, 0x33F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F650u;
label_33f650:
    // 0x33f650: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33f654: 0xc0ca31c  jal         func_328C70
    ctx->pc = 0x33F654u;
    SET_GPR_U32(ctx, 31, 0x33F65Cu);
    ctx->pc = 0x33F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F654u;
    // 0x33f658: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C70u, 0x33F654u, 0x33F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F65Cu;
label_33f65c:
    // 0x33f65c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33f660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f668: 0x3e00008  jr          $ra
    ctx->pc = 0x33F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F668u;
        // 0x33f66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F670u;
    // 0x33f670: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f674: 0x0  nop
    ctx->pc = 0x33f674u;
    // NOP
    // 0x33f678: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f67c: 0x0  nop
    ctx->pc = 0x33f67cu;
    // NOP
    // 0x33f680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33f684: 0x0  nop
    ctx->pc = 0x33f684u;
    // NOP
    // 0x33f688: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33f688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33f68c: 0x0  nop
    ctx->pc = 0x33f68cu;
    // NOP
    ctx->pc = 0x33f690u;
}
