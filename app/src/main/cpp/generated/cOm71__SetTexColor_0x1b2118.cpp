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

// Function: cOm71__SetTexColor
// Address: 0x1b2118 - 0x1b21b0
void cOm71__SetTexColor_0x1b2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm71__SetTexColor_0x1b2118");
#endif

    switch (ctx->pc) {
        case 0x1b2168u: goto label_1b2168;
        case 0x1b217cu: goto label_1b217c;
        case 0x1b2190u: goto label_1b2190;
        case 0x1b21a4u: goto label_1b21a4;
        default: break;
    }

    ctx->pc = 0x1b2118u;

    // 0x1b2118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b211c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1b211cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1b2120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2124: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1b2124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2128: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B2128u;
    {
        const bool branch_taken_0x1b2128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2128u;
        // 0x1b212c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2128) {
            ctx->pc = 0x1B21A4u;
            goto label_1b21a4;
        }
    }
    ctx->pc = 0x1B2130u;
    // 0x1b2130: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1b2130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1b2134: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b2134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2138: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2138u;
    {
        const bool branch_taken_0x1b2138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2138u;
        // 0x1b213c: 0xa4c50604  sh          $a1, 0x604($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 1540), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2138) {
            ctx->pc = 0x1B21A4u;
            goto label_1b21a4;
        }
    }
    ctx->pc = 0x1B2140u;
    // 0x1b2140: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b2144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b2144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2148: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x1b2148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x1b214c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2150: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2154: 0x800008  jr          $a0
    ctx->pc = 0x1B2154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B215Cu: goto label_1b215c;
            case 0x1B2170u: goto label_1b2170;
            case 0x1B2184u: goto label_1b2184;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B21A4u: goto label_1b21a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2154u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B215Cu;
label_1b215c:
    // 0x1b215c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2160: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1B2160u;
    SET_GPR_U32(ctx, 31, 0x1B2168u);
    ctx->pc = 0x1B2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2160u;
    // 0x1b2164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1B2160u, 0x1B2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2168u;
label_1b2168:
    // 0x1b2168: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B2168u;
    {
        const bool branch_taken_0x1b2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2168u;
        // 0x1b216c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2168) {
            ctx->pc = 0x1B21A8u;
            goto label_1b21a8;
        }
    }
    ctx->pc = 0x1B2170u;
label_1b2170:
    // 0x1b2170: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2174: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1B2174u;
    SET_GPR_U32(ctx, 31, 0x1B217Cu);
    ctx->pc = 0x1B2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2174u;
    // 0x1b2178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1B2174u, 0x1B217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B217Cu;
label_1b217c:
    // 0x1b217c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B217Cu;
    {
        const bool branch_taken_0x1b217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B217Cu;
        // 0x1b2180: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b217c) {
            ctx->pc = 0x1B21A8u;
            goto label_1b21a8;
        }
    }
    ctx->pc = 0x1B2184u;
label_1b2184:
    // 0x1b2184: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2188: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1B2188u;
    SET_GPR_U32(ctx, 31, 0x1B2190u);
    ctx->pc = 0x1B218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2188u;
    // 0x1b218c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1B2188u, 0x1B2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2190u;
label_1b2190:
    // 0x1b2190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2190u;
    {
        const bool branch_taken_0x1b2190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2190u;
        // 0x1b2194: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2190) {
            ctx->pc = 0x1B21A8u;
            goto label_1b21a8;
        }
    }
    ctx->pc = 0x1B2198u;
label_1b2198:
    // 0x1b2198: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b2198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b219c: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1B219Cu;
    SET_GPR_U32(ctx, 31, 0x1B21A4u);
    ctx->pc = 0x1B21A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B219Cu;
    // 0x1b21a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1B219Cu, 0x1B21A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21A4u;
label_1b21a4:
    // 0x1b21a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b21a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b21a8:
    // 0x1b21a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B21A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A8u;
        // 0x1b21ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B21B0u;
}
