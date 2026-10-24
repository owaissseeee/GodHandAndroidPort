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

// Function: func_00334248
// Address: 0x334248 - 0x3342e8
void func_00334248_0x334248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334248_0x334248");
#endif

    switch (ctx->pc) {
        case 0x33426cu: goto label_33426c;
        case 0x33428cu: goto label_33428c;
        case 0x334294u: goto label_334294;
        case 0x3342a0u: goto label_3342a0;
        case 0x3342acu: goto label_3342ac;
        case 0x3342c0u: goto label_3342c0;
        case 0x3342c8u: goto label_3342c8;
        case 0x3342d0u: goto label_3342d0;
        default: break;
    }

    ctx->pc = 0x334248u;

    // 0x334248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33424c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33424cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334250: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x334254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334258: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x334258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33425c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x33425Cu;
    {
        const bool branch_taken_0x33425c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33425Cu;
        // 0x334260: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33425c) {
            ctx->pc = 0x3342D4u;
            goto label_3342d4;
        }
    }
    ctx->pc = 0x334264u;
    // 0x334264: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x334264u;
    SET_GPR_U32(ctx, 31, 0x33426Cu);
    ctx->pc = 0x334268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334264u;
    // 0x334268: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3351C0u, 0x334264u, 0x33426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33426Cu;
label_33426c:
    // 0x33426c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x334270: 0x2451a250  addiu       $s1, $v0, -0x5DB0
    ctx->pc = 0x334270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x334274: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x334274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x334278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33427c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33427Cu;
    {
        const bool branch_taken_0x33427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33427Cu;
        // 0x334280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33427c) {
            ctx->pc = 0x3342D0u;
            goto label_3342d0;
        }
    }
    ctx->pc = 0x334284u;
    // 0x334284: 0xc0cd35a  jal         func_334D68
    ctx->pc = 0x334284u;
    SET_GPR_U32(ctx, 31, 0x33428Cu);
    ctx->pc = 0x334D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334D68u, 0x334284u, 0x33428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33428Cu;
label_33428c:
    // 0x33428c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33428Cu;
    SET_GPR_U32(ctx, 31, 0x334294u);
    ctx->pc = 0x334290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33428Cu;
    // 0x334290: 0x24044200  addiu       $a0, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33428Cu, 0x334294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334294u;
label_334294:
    // 0x334294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334298: 0xc0cc7ba  jal         func_331EE8
    ctx->pc = 0x334298u;
    SET_GPR_U32(ctx, 31, 0x3342A0u);
    ctx->pc = 0x33429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334298u;
    // 0x33429c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331EE8u, 0x334298u, 0x3342A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342A0u;
label_3342a0:
    // 0x3342a0: 0x24044201  addiu       $a0, $zero, 0x4201
    ctx->pc = 0x3342a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16897));
    // 0x3342a4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3342A4u;
    SET_GPR_U32(ctx, 31, 0x3342ACu);
    ctx->pc = 0x3342A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342A4u;
    // 0x3342a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3342A4u, 0x3342ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342ACu;
label_3342ac:
    // 0x3342ac: 0x24044300  addiu       $a0, $zero, 0x4300
    ctx->pc = 0x3342acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x3342b0: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3342B0u;
    {
        const bool branch_taken_0x3342b0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342B0u;
        // 0x3342b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342b0) {
            ctx->pc = 0x3342D4u;
            goto label_3342d4;
        }
    }
    ctx->pc = 0x3342B8u;
    // 0x3342b8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3342B8u;
    SET_GPR_U32(ctx, 31, 0x3342C0u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3342B8u, 0x3342C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342C0u;
label_3342c0:
    // 0x3342c0: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x3342C0u;
    SET_GPR_U32(ctx, 31, 0x3342C8u);
    ctx->pc = 0x3342C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342C0u;
    // 0x3342c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x3342C0u, 0x3342C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342C8u;
label_3342c8:
    // 0x3342c8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3342C8u;
    SET_GPR_U32(ctx, 31, 0x3342D0u);
    ctx->pc = 0x3342CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342C8u;
    // 0x3342cc: 0x24044301  addiu       $a0, $zero, 0x4301 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3342C8u, 0x3342D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342D0u;
label_3342d0:
    // 0x3342d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3342d4:
    // 0x3342d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3342d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3342d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3342d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3342dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3342dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3342e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3342E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342E0u;
        // 0x3342e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3342E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3342E8u;
}
