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

// Function: func_003272C0
// Address: 0x3272c0 - 0x327370
void func_003272C0_0x3272c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003272C0_0x3272c0");
#endif

    switch (ctx->pc) {
        case 0x3272e0u: goto label_3272e0;
        case 0x3272f0u: goto label_3272f0;
        case 0x3272f8u: goto label_3272f8;
        case 0x327300u: goto label_327300;
        case 0x327314u: goto label_327314;
        default: break;
    }

    ctx->pc = 0x3272c0u;

    // 0x3272c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3272c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3272c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3272c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3272c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3272c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3272ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3272d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3272d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3272d4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3272d8: 0xc0cf464  jal         func_33D190
    ctx->pc = 0x3272D8u;
    SET_GPR_U32(ctx, 31, 0x3272E0u);
    ctx->pc = 0x3272DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272D8u;
    // 0x3272dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D190u, 0x3272D8u, 0x3272E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272E0u;
label_3272e0:
    // 0x3272e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3272E0u;
    {
        const bool branch_taken_0x3272e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3272e0) {
            ctx->pc = 0x3272F0u;
            goto label_3272f0;
        }
    }
    ctx->pc = 0x3272E8u;
    // 0x3272e8: 0xc0c9b2e  jal         func_326CB8
    ctx->pc = 0x3272E8u;
    SET_GPR_U32(ctx, 31, 0x3272F0u);
    ctx->pc = 0x3272ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272E8u;
    // 0x3272ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CB8u, 0x3272E8u, 0x3272F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272F0u;
label_3272f0:
    // 0x3272f0: 0xc0cf61c  jal         func_33D870
    ctx->pc = 0x3272F0u;
    SET_GPR_U32(ctx, 31, 0x3272F8u);
    ctx->pc = 0x3272F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272F0u;
    // 0x3272f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D870u, 0x3272F0u, 0x3272F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272F8u;
label_3272f8:
    // 0x3272f8: 0xc0cf464  jal         func_33D190
    ctx->pc = 0x3272F8u;
    SET_GPR_U32(ctx, 31, 0x327300u);
    ctx->pc = 0x3272FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272F8u;
    // 0x3272fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D190u, 0x3272F8u, 0x327300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327304: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327304u;
    {
        const bool branch_taken_0x327304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327304) {
            ctx->pc = 0x327308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327304u;
            // 0x327308: 0x86040098  lh          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327318u;
            goto label_327318;
        }
    }
    ctx->pc = 0x32730Cu;
    // 0x32730c: 0xc0c9c12  jal         func_327048
    ctx->pc = 0x32730Cu;
    SET_GPR_U32(ctx, 31, 0x327314u);
    ctx->pc = 0x327310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32730Cu;
    // 0x327310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327048u, 0x32730Cu, 0x327314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327314u;
label_327314:
    // 0x327314: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x327314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_327318:
    // 0x327318: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x327318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32731c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32731Cu;
    {
        const bool branch_taken_0x32731c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32731Cu;
        // 0x327320: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32731c) {
            ctx->pc = 0x327344u;
            goto label_327344;
        }
    }
    ctx->pc = 0x327324u;
    // 0x327324: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x327324u;
    {
        const bool branch_taken_0x327324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327324u;
        // 0x327328: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327324) {
            ctx->pc = 0x327344u;
            goto label_327344;
        }
    }
    ctx->pc = 0x32732Cu;
    // 0x32732c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32732Cu;
    {
        const bool branch_taken_0x32732c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32732Cu;
        // 0x327330: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32732c) {
            ctx->pc = 0x327344u;
            goto label_327344;
        }
    }
    ctx->pc = 0x327334u;
    // 0x327334: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327334u;
    {
        const bool branch_taken_0x327334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x327338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327334u;
        // 0x327338: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327334) {
            ctx->pc = 0x327344u;
            goto label_327344;
        }
    }
    ctx->pc = 0x32733Cu;
    // 0x32733c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32733Cu;
    {
        const bool branch_taken_0x32733c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x327340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32733Cu;
        // 0x327340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32733c) {
            ctx->pc = 0x327360u;
            goto label_327360;
        }
    }
    ctx->pc = 0x327344u;
label_327344:
    // 0x327344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32734c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32734cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327354: 0x80c9c8c  j           func_327230
    ctx->pc = 0x327354u;
    ctx->pc = 0x327358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327354u;
    // 0x327358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327230u, 0x327354u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32735Cu;
    // 0x32735c: 0x0  nop
    ctx->pc = 0x32735cu;
    // NOP
label_327360:
    // 0x327360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327368: 0x3e00008  jr          $ra
    ctx->pc = 0x327368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327368u;
        // 0x32736c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327370u;
}
