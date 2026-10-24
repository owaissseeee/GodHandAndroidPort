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

// Function: ratio
// Address: 0x390318 - 0x3903e8
void ratio_0x390318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ratio_0x390318");
#endif

    switch (ctx->pc) {
        case 0x39033cu: goto label_39033c;
        case 0x39034cu: goto label_39034c;
        case 0x3903ccu: goto label_3903cc;
        default: break;
    }

    ctx->pc = 0x390318u;

    // 0x390318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x390318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39031c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x390320: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x390320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x390324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x390324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x390328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39032c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x390330: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x390330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x390334: 0xc0e401e  jal         func_390078
    ctx->pc = 0x390334u;
    SET_GPR_U32(ctx, 31, 0x39033Cu);
    ctx->pc = 0x390338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390334u;
    // 0x390338: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390078u, 0x390334u, 0x39033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39033Cu;
label_39033c:
    // 0x39033c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39033cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390344: 0xc0e401e  jal         func_390078
    ctx->pc = 0x390344u;
    SET_GPR_U32(ctx, 31, 0x39034Cu);
    ctx->pc = 0x390348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390344u;
    // 0x390348: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390078u, 0x390344u, 0x39034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39034Cu;
label_39034c:
    // 0x39034c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x39034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x390350: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x390350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390354: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x390354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x390358: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x390358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39035c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x390360: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x390360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x390364: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x390364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x390368: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x390368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39036c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390370: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x390370u;
    {
        const bool branch_taken_0x390370 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x390374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390370u;
        // 0x390374: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390370) {
            ctx->pc = 0x39039Cu;
            goto label_39039c;
        }
    }
    ctx->pc = 0x390378u;
    // 0x390378: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x390378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x39037c: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x39037cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390380: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x390380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x390384: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x390384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x390388: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39038c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x390390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390394: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x390394u;
    {
        const bool branch_taken_0x390394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390394u;
        // 0x390398: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390394) {
            ctx->pc = 0x3903C0u;
            goto label_3903c0;
        }
    }
    ctx->pc = 0x39039Cu;
label_39039c:
    // 0x39039c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x39039cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3903a0: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x3903a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x3903a4: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x3903a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3903a8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3903a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3903ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3903acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3903b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3903b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3903b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3903b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3903b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3903bc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3903bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3903c0:
    // 0x3903c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3903c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3903c4: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3903C4u;
    SET_GPR_U32(ctx, 31, 0x3903CCu);
    ctx->pc = 0x3903C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3903C4u;
    // 0x3903c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3903C4u, 0x3903CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903CCu;
label_3903cc:
    // 0x3903cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3903ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3903d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3903d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3903d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3903d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3903d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3903d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3903dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3903DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3903E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903DCu;
        // 0x3903e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3903E4u;
    // 0x3903e4: 0x0  nop
    ctx->pc = 0x3903e4u;
    // NOP
    ctx->pc = 0x3903e8u;
}
