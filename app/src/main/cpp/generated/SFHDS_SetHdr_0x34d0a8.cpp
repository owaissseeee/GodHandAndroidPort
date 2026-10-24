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

// Function: SFHDS_SetHdr
// Address: 0x34d0a8 - 0x34d160
void SFHDS_SetHdr_0x34d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFHDS_SetHdr_0x34d0a8");
#endif

    switch (ctx->pc) {
        case 0x34d0f4u: goto label_34d0f4;
        case 0x34d10cu: goto label_34d10c;
        case 0x34d124u: goto label_34d124;
        case 0x34d13cu: goto label_34d13c;
        default: break;
    }

    ctx->pc = 0x34d0a8u;

    // 0x34d0a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d0ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d0b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d0b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34d0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d0bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x34d0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34d0c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34d0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0c8: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x34d0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x34d0cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34d0d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d0d4: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x34d0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x34d0d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34d0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d0e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x34d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x34d0e4: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34D0E4u;
    {
        const bool branch_taken_0x34d0e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x34D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0E4u;
        // 0x34d0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0e4) {
            ctx->pc = 0x34D144u;
            goto label_34d144;
        }
    }
    ctx->pc = 0x34D0ECu;
    // 0x34d0ec: 0xc0d3458  jal         func_34D160
    ctx->pc = 0x34D0ECu;
    SET_GPR_U32(ctx, 31, 0x34D0F4u);
    ctx->pc = 0x34D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D160u, 0x34D0ECu, 0x34D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0F4u;
label_34d0f4:
    // 0x34d0f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34D0F4u;
    {
        const bool branch_taken_0x34d0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d0f4) {
            ctx->pc = 0x34D0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D0F4u;
            // 0x34d0f8: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D114u;
            goto label_34d114;
        }
    }
    ctx->pc = 0x34D0FCu;
    // 0x34d0fc: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x34d0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x34d100: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x34d104: 0xc0d3458  jal         func_34D160
    ctx->pc = 0x34D104u;
    SET_GPR_U32(ctx, 31, 0x34D10Cu);
    ctx->pc = 0x34D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D104u;
    // 0x34d108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D160u, 0x34D104u, 0x34D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D10Cu;
label_34d10c:
    // 0x34d10c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34D10Cu;
    {
        const bool branch_taken_0x34d10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D10Cu;
        // 0x34d110: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d10c) {
            ctx->pc = 0x34D144u;
            goto label_34d144;
        }
    }
    ctx->pc = 0x34D114u;
label_34d114:
    // 0x34d114: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x34d114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x34d118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d11c: 0xc0d346e  jal         func_34D1B8
    ctx->pc = 0x34D11Cu;
    SET_GPR_U32(ctx, 31, 0x34D124u);
    ctx->pc = 0x34D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D11Cu;
    // 0x34d120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D1B8u, 0x34D11Cu, 0x34D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D124u;
label_34d124:
    // 0x34d124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d12c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D12Cu;
    {
        const bool branch_taken_0x34d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D12Cu;
        // 0x34d130: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d12c) {
            ctx->pc = 0x34D144u;
            goto label_34d144;
        }
    }
    ctx->pc = 0x34D134u;
    // 0x34d134: 0xc0d3484  jal         func_34D210
    ctx->pc = 0x34D134u;
    SET_GPR_U32(ctx, 31, 0x34D13Cu);
    ctx->pc = 0x34D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D210u, 0x34D134u, 0x34D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D13Cu;
label_34d13c:
    // 0x34d13c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x34d140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34d144:
    // 0x34d144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d14c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34d14cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d150: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34d150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d154: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d158: 0x3e00008  jr          $ra
    ctx->pc = 0x34D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D158u;
        // 0x34d15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D160u;
}
