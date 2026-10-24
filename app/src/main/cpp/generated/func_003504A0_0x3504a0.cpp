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

// Function: func_003504A0
// Address: 0x3504a0 - 0x350528
void func_003504A0_0x3504a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003504A0_0x3504a0");
#endif

    switch (ctx->pc) {
        case 0x3504ccu: goto label_3504cc;
        default: break;
    }

    ctx->pc = 0x3504a0u;

    // 0x3504a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3504a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3504a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3504a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3504a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3504a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3504acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3504b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3504b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3504b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3504b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3504b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3504bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3504c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3504c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3504c4: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x3504C4u;
    SET_GPR_U32(ctx, 31, 0x3504CCu);
    ctx->pc = 0x3504C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504C4u;
    // 0x3504c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x3504C4u, 0x3504CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504CCu;
label_3504cc:
    // 0x3504cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3504ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3504d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3504d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3504d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3504d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3504DCu;
    {
        const bool branch_taken_0x3504dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3504E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504DCu;
        // 0x3504e0: 0x34a50185  ori         $a1, $a1, 0x185 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504dc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3504E4u;
    // 0x3504e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3504e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3504e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3504e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3504ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3504ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3504f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3504f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3504f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3504f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3504f8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3504F8u;
    ctx->pc = 0x3504FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504F8u;
    // 0x3504fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3504F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350500u;
label_350500:
    // 0x350500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350508: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x350508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35050c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35050cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35051c: 0x80d414a  j           func_350528
    ctx->pc = 0x35051Cu;
    ctx->pc = 0x350520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35051Cu;
    // 0x350520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350528u, 0x35051Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350524u;
    // 0x350524: 0x0  nop
    ctx->pc = 0x350524u;
    // NOP
    ctx->pc = 0x350528u;
}
