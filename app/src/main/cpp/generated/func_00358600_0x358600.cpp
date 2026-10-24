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

// Function: func_00358600
// Address: 0x358600 - 0x358678
void func_00358600_0x358600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358600_0x358600");
#endif

    switch (ctx->pc) {
        case 0x35861cu: goto label_35861c;
        case 0x358654u: goto label_358654;
        case 0x35865cu: goto label_35865c;
        case 0x358664u: goto label_358664;
        default: break;
    }

    ctx->pc = 0x358600u;

    // 0x358600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35860c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x358610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x358614: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x358614u;
    SET_GPR_U32(ctx, 31, 0x35861Cu);
    ctx->pc = 0x358618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358614u;
    // 0x358618: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x358614u, 0x35861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35861Cu;
label_35861c:
    // 0x35861c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x358620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x358620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x358624: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x358624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x358628: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x358628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35862c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x35862cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x358630: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x358630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x358634: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x358634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x358638: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x358638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x35863c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x35863cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x358640: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x358640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x358644: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x358644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x358648: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x358648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x35864c: 0xc0d619e  jal         func_358678
    ctx->pc = 0x35864Cu;
    SET_GPR_U32(ctx, 31, 0x358654u);
    ctx->pc = 0x358650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35864Cu;
    // 0x358650: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358678u, 0x35864Cu, 0x358654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358654u;
label_358654:
    // 0x358654: 0xc0d619e  jal         func_358678
    ctx->pc = 0x358654u;
    SET_GPR_U32(ctx, 31, 0x35865Cu);
    ctx->pc = 0x358658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358654u;
    // 0x358658: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358678u, 0x358654u, 0x35865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35865Cu;
label_35865c:
    // 0x35865c: 0xc0d619e  jal         func_358678
    ctx->pc = 0x35865Cu;
    SET_GPR_U32(ctx, 31, 0x358664u);
    ctx->pc = 0x358660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35865Cu;
    // 0x358660: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358678u, 0x35865Cu, 0x358664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358664u;
label_358664:
    // 0x358664: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x358664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x358668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35866c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35866cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358670: 0x80d619e  j           func_358678
    ctx->pc = 0x358670u;
    ctx->pc = 0x358674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358670u;
    // 0x358674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358678u, 0x358670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358678u;
}
