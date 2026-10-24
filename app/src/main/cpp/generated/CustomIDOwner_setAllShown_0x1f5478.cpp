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

// Function: CustomIDOwner_setAllShown
// Address: 0x1f5478 - 0x1f5510
void CustomIDOwner_setAllShown_0x1f5478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setAllShown_0x1f5478");
#endif

    switch (ctx->pc) {
        case 0x1f549cu: goto label_1f549c;
        case 0x1f54acu: goto label_1f54ac;
        case 0x1f54bcu: goto label_1f54bc;
        case 0x1f54ccu: goto label_1f54cc;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f54ecu: goto label_1f54ec;
        case 0x1f54fcu: goto label_1f54fc;
        default: break;
    }

    ctx->pc = 0x1f5478u;

    // 0x1f5478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f547c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f5480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f5488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f548c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f5490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5494: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5494u;
    SET_GPR_U32(ctx, 31, 0x1F549Cu);
    ctx->pc = 0x1F5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5494u;
    // 0x1f5498: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5494u, 0x1F549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F549Cu;
label_1f549c:
    // 0x1f549c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54a4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54A4u;
    SET_GPR_U32(ctx, 31, 0x1F54ACu);
    ctx->pc = 0x1F54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54A4u;
    // 0x1f54a8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54A4u, 0x1F54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54ACu;
label_1f54ac:
    // 0x1f54ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f54acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54b4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54B4u;
    SET_GPR_U32(ctx, 31, 0x1F54BCu);
    ctx->pc = 0x1F54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54B4u;
    // 0x1f54b8: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54B4u, 0x1F54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54BCu;
label_1f54bc:
    // 0x1f54bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f54bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54c4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54C4u;
    SET_GPR_U32(ctx, 31, 0x1F54CCu);
    ctx->pc = 0x1F54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54C4u;
    // 0x1f54c8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54C4u, 0x1F54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54CCu;
label_1f54cc:
    // 0x1f54cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54d4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54D4u;
    SET_GPR_U32(ctx, 31, 0x1F54DCu);
    ctx->pc = 0x1F54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54D4u;
    // 0x1f54d8: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54D4u, 0x1F54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54DCu;
label_1f54dc:
    // 0x1f54dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f54dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54e4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54E4u;
    SET_GPR_U32(ctx, 31, 0x1F54ECu);
    ctx->pc = 0x1F54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54E4u;
    // 0x1f54e8: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54E4u, 0x1F54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54ECu;
label_1f54ec:
    // 0x1f54ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f54f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54f4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F54F4u;
    SET_GPR_U32(ctx, 31, 0x1F54FCu);
    ctx->pc = 0x1F54F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54F4u;
    // 0x1f54f8: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F54F4u, 0x1F54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54FCu;
label_1f54fc:
    // 0x1f54fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f54fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5508: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5508u;
        // 0x1f550c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5510u;
}
