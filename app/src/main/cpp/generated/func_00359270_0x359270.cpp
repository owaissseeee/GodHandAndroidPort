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

// Function: func_00359270
// Address: 0x359270 - 0x3592d0
void func_00359270_0x359270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359270_0x359270");
#endif

    switch (ctx->pc) {
        case 0x35928cu: goto label_35928c;
        default: break;
    }

    ctx->pc = 0x359270u;

    // 0x359270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35927c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359284: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359284u;
    SET_GPR_U32(ctx, 31, 0x35928Cu);
    ctx->pc = 0x359288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359284u;
    // 0x359288: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359284u, 0x35928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35928Cu;
label_35928c:
    // 0x35928c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35928cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359290: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359290u;
    {
        const bool branch_taken_0x359290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359290u;
        // 0x359294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359290) {
            ctx->pc = 0x3592B0u;
            goto label_3592b0;
        }
    }
    ctx->pc = 0x359298u;
    // 0x359298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35929c: 0x34a50139  ori         $a1, $a1, 0x139
    ctx->pc = 0x35929cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)313);
    // 0x3592a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3592a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3592a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3592a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3592a8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3592A8u;
    ctx->pc = 0x3592ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592A8u;
    // 0x3592ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3592A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592B0u;
label_3592b0:
    // 0x3592b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3592b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3592b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3592b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3592b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3592bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3592bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3592c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3592c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3592c4: 0x80d2ffe  j           func_34BFF8
    ctx->pc = 0x3592C4u;
    ctx->pc = 0x3592C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592C4u;
    // 0x3592c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFF8u, 0x3592C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3592CCu;
    // 0x3592cc: 0x0  nop
    ctx->pc = 0x3592ccu;
    // NOP
    ctx->pc = 0x3592d0u;
}
