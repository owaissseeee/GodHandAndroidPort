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

// Function: func_001ED178
// Address: 0x1ed178 - 0x1ed3c0
void func_001ED178_0x1ed178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED178_0x1ed178");
#endif

    switch (ctx->pc) {
        case 0x1ed19cu: goto label_1ed19c;
        case 0x1ed1c0u: goto label_1ed1c0;
        case 0x1ed1d0u: goto label_1ed1d0;
        case 0x1ed1ecu: goto label_1ed1ec;
        case 0x1ed1fcu: goto label_1ed1fc;
        case 0x1ed20cu: goto label_1ed20c;
        case 0x1ed21cu: goto label_1ed21c;
        case 0x1ed22cu: goto label_1ed22c;
        case 0x1ed23cu: goto label_1ed23c;
        case 0x1ed24cu: goto label_1ed24c;
        case 0x1ed25cu: goto label_1ed25c;
        case 0x1ed26cu: goto label_1ed26c;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed284u: goto label_1ed284;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3acu: goto label_1ed3ac;
        default: break;
    }

    ctx->pc = 0x1ed178u;

    // 0x1ed178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed17c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed180: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ed180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ed184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed188: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1ed188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ed18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed194: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED194u;
    SET_GPR_U32(ctx, 31, 0x1ED19Cu);
    ctx->pc = 0x1ED198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED194u;
    // 0x1ed198: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED194u, 0x1ED19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED19Cu;
label_1ed19c:
    // 0x1ed19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1a0: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ED1A0u;
    {
        const bool branch_taken_0x1ed1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A0u;
        // 0x1ed1a4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1a0) {
            ctx->pc = 0x1ED28Cu;
            goto label_1ed28c;
        }
    }
    ctx->pc = 0x1ED1A8u;
    // 0x1ed1a8: 0x50400081  beql        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1ED1A8u;
    {
        const bool branch_taken_0x1ed1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed1a8) {
            ctx->pc = 0x1ED1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED1A8u;
            // 0x1ed1ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED3B0u;
            goto label_1ed3b0;
        }
    }
    ctx->pc = 0x1ED1B0u;
    // 0x1ed1b0: 0x5600007f  bnel        $s0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x1ED1B0u;
    {
        const bool branch_taken_0x1ed1b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed1b0) {
            ctx->pc = 0x1ED1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED1B0u;
            // 0x1ed1b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED3B0u;
            goto label_1ed3b0;
        }
    }
    ctx->pc = 0x1ED1B8u;
    // 0x1ed1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed1c0:
    // 0x1ed1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1c8: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED1C8u;
    SET_GPR_U32(ctx, 31, 0x1ED1D0u);
    ctx->pc = 0x1ED1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1C8u;
    // 0x1ed1cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED1C8u, 0x1ED1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1D0u;
label_1ed1d0:
    // 0x1ed1d0: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x1ed1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1ed1d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED1D4u;
    {
        const bool branch_taken_0x1ed1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed1d4) {
            ctx->pc = 0x1ED1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED1D4u;
            // 0x1ed1d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed1c0;
        }
    }
    ctx->pc = 0x1ED1DCu;
    // 0x1ed1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1e0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ed1e4: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED1E4u;
    SET_GPR_U32(ctx, 31, 0x1ED1ECu);
    ctx->pc = 0x1ED1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1E4u;
    // 0x1ed1e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED1E4u, 0x1ED1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1ECu;
label_1ed1ec:
    // 0x1ed1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1f0: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1ed1f4: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED1F4u;
    SET_GPR_U32(ctx, 31, 0x1ED1FCu);
    ctx->pc = 0x1ED1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1F4u;
    // 0x1ed1f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED1F4u, 0x1ED1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1FCu;
label_1ed1fc:
    // 0x1ed1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed200: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ed204: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED204u;
    SET_GPR_U32(ctx, 31, 0x1ED20Cu);
    ctx->pc = 0x1ED208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED204u;
    // 0x1ed208: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED204u, 0x1ED20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED20Cu;
label_1ed20c:
    // 0x1ed20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed210: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1ed214: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED214u;
    SET_GPR_U32(ctx, 31, 0x1ED21Cu);
    ctx->pc = 0x1ED218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED214u;
    // 0x1ed218: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED214u, 0x1ED21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED21Cu;
label_1ed21c:
    // 0x1ed21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed220: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ed224: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED224u;
    SET_GPR_U32(ctx, 31, 0x1ED22Cu);
    ctx->pc = 0x1ED228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED224u;
    // 0x1ed228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED224u, 0x1ED22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED22Cu;
label_1ed22c:
    // 0x1ed22c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed230: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ed234: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED234u;
    SET_GPR_U32(ctx, 31, 0x1ED23Cu);
    ctx->pc = 0x1ED238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED234u;
    // 0x1ed238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED234u, 0x1ED23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED23Cu;
label_1ed23c:
    // 0x1ed23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed240: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1ed240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ed244: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED244u;
    SET_GPR_U32(ctx, 31, 0x1ED24Cu);
    ctx->pc = 0x1ED248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED244u;
    // 0x1ed248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED244u, 0x1ED24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED24Cu;
label_1ed24c:
    // 0x1ed24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed250: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ed254: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED254u;
    SET_GPR_U32(ctx, 31, 0x1ED25Cu);
    ctx->pc = 0x1ED258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED254u;
    // 0x1ed258: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED254u, 0x1ED25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED25Cu;
label_1ed25c:
    // 0x1ed25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed260: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ed264: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED264u;
    SET_GPR_U32(ctx, 31, 0x1ED26Cu);
    ctx->pc = 0x1ED268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED264u;
    // 0x1ed268: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED264u, 0x1ED26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED26Cu;
label_1ed26c:
    // 0x1ed26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed270: 0xc07b52c  jal         func_1ED4B0
    ctx->pc = 0x1ED270u;
    SET_GPR_U32(ctx, 31, 0x1ED278u);
    ctx->pc = 0x1ED274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED270u;
    // 0x1ed274: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED4B0u, 0x1ED270u, 0x1ED278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED278u;
label_1ed278:
    // 0x1ed278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed27c: 0xc07b53a  jal         func_1ED4E8
    ctx->pc = 0x1ED27Cu;
    SET_GPR_U32(ctx, 31, 0x1ED284u);
    ctx->pc = 0x1ED280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED27Cu;
    // 0x1ed280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED4E8u, 0x1ED27Cu, 0x1ED284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED284u;
label_1ed284:
    // 0x1ed284: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1ED284u;
    {
        const bool branch_taken_0x1ed284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED284u;
        // 0x1ed288: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed284) {
            ctx->pc = 0x1ED3B0u;
            goto label_1ed3b0;
        }
    }
    ctx->pc = 0x1ED28Cu;
label_1ed28c:
    // 0x1ed28c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed294: 0x0  nop
    ctx->pc = 0x1ed294u;
    // NOP
label_1ed298:
    // 0x1ed298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed29c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ed29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed2a0: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2A0u;
    SET_GPR_U32(ctx, 31, 0x1ED2A8u);
    ctx->pc = 0x1ED2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2A0u;
    // 0x1ed2a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2A0u, 0x1ED2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2A8u;
label_1ed2a8:
    // 0x1ed2a8: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x1ed2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1ed2ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED2ACu;
    {
        const bool branch_taken_0x1ed2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2ac) {
            ctx->pc = 0x1ED2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED2ACu;
            // 0x1ed2b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed298;
        }
    }
    ctx->pc = 0x1ED2B4u;
    // 0x1ed2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2b8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ed2bc: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2BCu;
    SET_GPR_U32(ctx, 31, 0x1ED2C4u);
    ctx->pc = 0x1ED2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2BCu;
    // 0x1ed2c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2BCu, 0x1ED2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2C4u;
label_1ed2c4:
    // 0x1ed2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2c8: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1ed2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1ed2cc: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2CCu;
    SET_GPR_U32(ctx, 31, 0x1ED2D4u);
    ctx->pc = 0x1ED2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2CCu;
    // 0x1ed2d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2CCu, 0x1ED2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2D4u;
label_1ed2d4:
    // 0x1ed2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2d8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1ed2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ed2dc: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2DCu;
    SET_GPR_U32(ctx, 31, 0x1ED2E4u);
    ctx->pc = 0x1ED2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2DCu;
    // 0x1ed2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2DCu, 0x1ED2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2E4u;
label_1ed2e4:
    // 0x1ed2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2e8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1ed2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1ed2ec: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2ECu;
    SET_GPR_U32(ctx, 31, 0x1ED2F4u);
    ctx->pc = 0x1ED2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2ECu;
    // 0x1ed2f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2ECu, 0x1ED2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2F4u;
label_1ed2f4:
    // 0x1ed2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed2f8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed2fc: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED2FCu;
    SET_GPR_U32(ctx, 31, 0x1ED304u);
    ctx->pc = 0x1ED300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2FCu;
    // 0x1ed300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED2FCu, 0x1ED304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED304u;
label_1ed304:
    // 0x1ed304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed308: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ed308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ed30c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED30Cu;
    SET_GPR_U32(ctx, 31, 0x1ED314u);
    ctx->pc = 0x1ED310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED30Cu;
    // 0x1ed310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED30Cu, 0x1ED314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED314u;
label_1ed314:
    // 0x1ed314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed318: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1ed318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ed31c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED31Cu;
    SET_GPR_U32(ctx, 31, 0x1ED324u);
    ctx->pc = 0x1ED320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED31Cu;
    // 0x1ed320: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED31Cu, 0x1ED324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED324u;
label_1ed324:
    // 0x1ed324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed328: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1ed328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ed32c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED32Cu;
    SET_GPR_U32(ctx, 31, 0x1ED334u);
    ctx->pc = 0x1ED330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED32Cu;
    // 0x1ed330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED32Cu, 0x1ED334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED334u;
label_1ed334:
    // 0x1ed334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed338: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1ed33c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED33Cu;
    SET_GPR_U32(ctx, 31, 0x1ED344u);
    ctx->pc = 0x1ED340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED33Cu;
    // 0x1ed340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED33Cu, 0x1ED344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED344u;
label_1ed344:
    // 0x1ed344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed348: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ed34c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED34Cu;
    SET_GPR_U32(ctx, 31, 0x1ED354u);
    ctx->pc = 0x1ED350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED34Cu;
    // 0x1ed350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED34Cu, 0x1ED354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED354u;
label_1ed354:
    // 0x1ed354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed358: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ed35c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED35Cu;
    SET_GPR_U32(ctx, 31, 0x1ED364u);
    ctx->pc = 0x1ED360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED35Cu;
    // 0x1ed360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED35Cu, 0x1ED364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED364u;
label_1ed364:
    // 0x1ed364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed368: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ed36c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED36Cu;
    SET_GPR_U32(ctx, 31, 0x1ED374u);
    ctx->pc = 0x1ED370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED36Cu;
    // 0x1ed370: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED36Cu, 0x1ED374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED374u;
label_1ed374:
    // 0x1ed374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed378: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ed37c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED37Cu;
    SET_GPR_U32(ctx, 31, 0x1ED384u);
    ctx->pc = 0x1ED380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED37Cu;
    // 0x1ed380: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED37Cu, 0x1ED384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED384u;
label_1ed384:
    // 0x1ed384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed388: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ed38c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ED38Cu;
    SET_GPR_U32(ctx, 31, 0x1ED394u);
    ctx->pc = 0x1ED390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED38Cu;
    // 0x1ed390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ED38Cu, 0x1ED394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED394u;
label_1ed394:
    // 0x1ed394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed398: 0xc07b52c  jal         func_1ED4B0
    ctx->pc = 0x1ED398u;
    SET_GPR_U32(ctx, 31, 0x1ED3A0u);
    ctx->pc = 0x1ED39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED398u;
    // 0x1ed39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED4B0u, 0x1ED398u, 0x1ED3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3A0u;
label_1ed3a0:
    // 0x1ed3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3a4: 0xc07b53a  jal         func_1ED4E8
    ctx->pc = 0x1ED3A4u;
    SET_GPR_U32(ctx, 31, 0x1ED3ACu);
    ctx->pc = 0x1ED3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3A4u;
    // 0x1ed3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED4E8u, 0x1ED3A4u, 0x1ED3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3ACu;
label_1ed3ac:
    // 0x1ed3ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed3b0:
    // 0x1ed3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B8u;
        // 0x1ed3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3C0u;
}
