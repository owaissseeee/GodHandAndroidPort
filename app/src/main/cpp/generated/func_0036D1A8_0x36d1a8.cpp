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

// Function: func_0036D1A8
// Address: 0x36d1a8 - 0x36d238
void func_0036D1A8_0x36d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D1A8_0x36d1a8");
#endif

    switch (ctx->pc) {
        case 0x36d1a8u: goto label_36d1a8;
        case 0x36d1acu: goto label_36d1ac;
        case 0x36d1b0u: goto label_36d1b0;
        case 0x36d1b4u: goto label_36d1b4;
        case 0x36d1b8u: goto label_36d1b8;
        case 0x36d1bcu: goto label_36d1bc;
        case 0x36d1c0u: goto label_36d1c0;
        case 0x36d1c4u: goto label_36d1c4;
        case 0x36d1c8u: goto label_36d1c8;
        case 0x36d1ccu: goto label_36d1cc;
        case 0x36d1d0u: goto label_36d1d0;
        case 0x36d1d4u: goto label_36d1d4;
        case 0x36d1d8u: goto label_36d1d8;
        case 0x36d1dcu: goto label_36d1dc;
        case 0x36d1e0u: goto label_36d1e0;
        case 0x36d1e4u: goto label_36d1e4;
        case 0x36d1e8u: goto label_36d1e8;
        case 0x36d1ecu: goto label_36d1ec;
        case 0x36d1f0u: goto label_36d1f0;
        case 0x36d1f4u: goto label_36d1f4;
        case 0x36d1f8u: goto label_36d1f8;
        case 0x36d1fcu: goto label_36d1fc;
        case 0x36d200u: goto label_36d200;
        case 0x36d204u: goto label_36d204;
        case 0x36d208u: goto label_36d208;
        case 0x36d20cu: goto label_36d20c;
        case 0x36d210u: goto label_36d210;
        case 0x36d214u: goto label_36d214;
        case 0x36d218u: goto label_36d218;
        case 0x36d21cu: goto label_36d21c;
        case 0x36d220u: goto label_36d220;
        case 0x36d224u: goto label_36d224;
        case 0x36d228u: goto label_36d228;
        case 0x36d22cu: goto label_36d22c;
        case 0x36d230u: goto label_36d230;
        case 0x36d234u: goto label_36d234;
        default: break;
    }

    ctx->pc = 0x36d1a8u;

label_36d1a8:
    // 0x36d1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36d1ac:
    // 0x36d1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_36d1b0:
    // 0x36d1b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36d1b4:
    // 0x36d1b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_36d1b8:
    // 0x36d1b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36d1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36d1bc:
    // 0x36d1bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_36d1c0:
    // 0x36d1c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_36d1c4:
    // 0x36d1c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_36d1c8:
    // 0x36d1c8: 0x9043a514  lbu         $v1, -0x5AEC($v0)
    ctx->pc = 0x36d1c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294944020)));
label_36d1cc:
    // 0x36d1cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36d1d0:
    // 0x36d1d0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_36d1d4:
    if (ctx->pc == 0x36D1D4u) {
        ctx->pc = 0x36D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1D0u;
        // 0x36d1d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D1D8u;
        goto label_36d1d8;
    }
    ctx->pc = 0x36D1D0u;
    {
        const bool branch_taken_0x36d1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x36D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1D0u;
        // 0x36d1d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d1d0) {
            ctx->pc = 0x36D1F0u;
            goto label_36d1f0;
        }
    }
    ctx->pc = 0x36D1D8u;
label_36d1d8:
    // 0x36d1d8: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x36d1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36d1dc:
    // 0x36d1dc: 0x20f809  jalr        $at
label_36d1e0:
    if (ctx->pc == 0x36D1E0u) {
        ctx->pc = 0x36D1E4u;
        goto label_36d1e4;
    }
    ctx->pc = 0x36D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x36D1E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D1DCu, 0x36D1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36D1E4u;
label_36d1e4:
    // 0x36d1e4: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_36d1e8:
    if (ctx->pc == 0x36D1E8u) {
        ctx->pc = 0x36D1ECu;
        goto label_36d1ec;
    }
    ctx->pc = 0x36D1E4u;
    {
        const bool branch_taken_0x36d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d1e4) {
            ctx->pc = 0x36D1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d1d8;
        }
    }
    ctx->pc = 0x36D1ECu;
label_36d1ec:
    // 0x36d1ec: 0x0  nop
    ctx->pc = 0x36d1ecu;
    // NOP
label_36d1f0:
    // 0x36d1f0: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x36d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
label_36d1f4:
    // 0x36d1f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_36d1f8:
    // 0x36d1f8: 0x2463a588  addiu       $v1, $v1, -0x5A78
    ctx->pc = 0x36d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944136));
label_36d1fc:
    // 0x36d1fc: 0x2442a478  addiu       $v0, $v0, -0x5B88
    ctx->pc = 0x36d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943864));
label_36d200:
    // 0x36d200: 0xc0db5f0  jal         func_36D7C0
label_36d204:
    if (ctx->pc == 0x36D204u) {
        ctx->pc = 0x36D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D200u;
        // 0x36d204: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D208u;
        goto label_36d208;
    }
    ctx->pc = 0x36D200u;
    SET_GPR_U32(ctx, 31, 0x36D208u);
    ctx->pc = 0x36D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D200u;
    // 0x36d204: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D7C0u, 0x36D200u, 0x36D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D208u;
label_36d208:
    // 0x36d208: 0xc0db73a  jal         func_36DCE8
label_36d20c:
    if (ctx->pc == 0x36D20Cu) {
        ctx->pc = 0x36D210u;
        goto label_36d210;
    }
    ctx->pc = 0x36D208u;
    SET_GPR_U32(ctx, 31, 0x36D210u);
    ctx->pc = 0x36DCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DCE8u, 0x36D208u, 0x36D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D210u;
label_36d210:
    // 0x36d210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36d214:
    // 0x36d214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36d218:
    // 0x36d218: 0xc0db4a0  jal         func_36D280
label_36d21c:
    if (ctx->pc == 0x36D21Cu) {
        ctx->pc = 0x36D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D218u;
        // 0x36d21c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D220u;
        goto label_36d220;
    }
    ctx->pc = 0x36D218u;
    SET_GPR_U32(ctx, 31, 0x36D220u);
    ctx->pc = 0x36D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D218u;
    // 0x36d21c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D280u, 0x36D218u, 0x36D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D220u;
label_36d220:
    // 0x36d220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d224:
    // 0x36d224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_36d228:
    // 0x36d228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36d22c:
    // 0x36d22c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36d230:
    // 0x36d230: 0x80db48e  j           func_36D238
label_36d234:
    if (ctx->pc == 0x36D234u) {
        ctx->pc = 0x36D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D230u;
        // 0x36d234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D238u;
        goto label_fallthrough_0x36d230;
    }
    ctx->pc = 0x36D230u;
    ctx->pc = 0x36D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D230u;
    // 0x36d234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D238u, 0x36D230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x36d230:
    ctx->pc = 0x36D238u;
}
