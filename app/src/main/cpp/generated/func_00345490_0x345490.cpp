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

// Function: func_00345490
// Address: 0x345490 - 0x3454f0
void func_00345490_0x345490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345490_0x345490");
#endif

    switch (ctx->pc) {
        case 0x3454b4u: goto label_3454b4;
        case 0x3454ccu: goto label_3454cc;
        case 0x3454e4u: goto label_3454e4;
        default: break;
    }

    ctx->pc = 0x345490u;

    // 0x345490: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x345490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x345494: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x345494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x345498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34549c: 0x24e77b90  addiu       $a3, $a3, 0x7B90
    ctx->pc = 0x34549cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31632));
    // 0x3454a0: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x3454a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
    // 0x3454a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3454a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3454a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3454a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3454ac: 0xc0d2282  jal         func_348A08
    ctx->pc = 0x3454ACu;
    SET_GPR_U32(ctx, 31, 0x3454B4u);
    ctx->pc = 0x3454B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454ACu;
    // 0x3454b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348A08u, 0x3454ACu, 0x3454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454B4u;
label_3454b4:
    // 0x3454b4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3454b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3454b8: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x3454b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x3454bc: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x3454bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    // 0x3454c0: 0x24c67ba8  addiu       $a2, $a2, 0x7BA8
    ctx->pc = 0x3454c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31656));
    // 0x3454c4: 0xc0d22b2  jal         func_348AC8
    ctx->pc = 0x3454C4u;
    SET_GPR_U32(ctx, 31, 0x3454CCu);
    ctx->pc = 0x3454C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454C4u;
    // 0x3454c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348AC8u, 0x3454C4u, 0x3454CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454CCu;
label_3454cc:
    // 0x3454cc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3454ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3454d0: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x3454d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x3454d4: 0x248492a0  addiu       $a0, $a0, -0x6D60
    ctx->pc = 0x3454d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939296));
    // 0x3454d8: 0x24c67bc0  addiu       $a2, $a2, 0x7BC0
    ctx->pc = 0x3454d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31680));
    // 0x3454dc: 0xc0d229c  jal         func_348A70
    ctx->pc = 0x3454DCu;
    SET_GPR_U32(ctx, 31, 0x3454E4u);
    ctx->pc = 0x3454E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454DCu;
    // 0x3454e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348A70u, 0x3454DCu, 0x3454E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454E4u;
label_3454e4:
    // 0x3454e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3454e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3454e8: 0x80d22c8  j           func_348B20
    ctx->pc = 0x3454E8u;
    ctx->pc = 0x3454ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454E8u;
    // 0x3454ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B20u, 0x3454E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3454F0u;
}
