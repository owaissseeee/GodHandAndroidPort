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

// Function: __floatdidf
// Address: 0x31dc98 - 0x31dd30
void ps2___floatdidf_0x31dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdidf_0x31dc98");
#endif

    switch (ctx->pc) {
        case 0x31dcc0u: goto label_31dcc0;
        case 0x31dcccu: goto label_31dccc;
        case 0x31dcd8u: goto label_31dcd8;
        case 0x31dcf8u: goto label_31dcf8;
        case 0x31dd10u: goto label_31dd10;
        case 0x31dd1cu: goto label_31dd1c;
        default: break;
    }

    ctx->pc = 0x31dc98u;

    // 0x31dc98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31dc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31dca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31dca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dca4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x31dca8: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x31dca8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x31dcac: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x31dcacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x31dcb0: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x31dcb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x31dcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31dcb8: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x31DCB8u;
    SET_GPR_U32(ctx, 31, 0x31DCC0u);
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x31DCB8u, 0x31DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCC0u;
label_31dcc0:
    // 0x31dcc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31dcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcc4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x31DCC4u;
    SET_GPR_U32(ctx, 31, 0x31DCCCu);
    ctx->pc = 0x31DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCC4u;
    // 0x31dcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x31DCC4u, 0x31DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCCCu;
label_31dccc:
    // 0x31dccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcd0: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x31DCD0u;
    SET_GPR_U32(ctx, 31, 0x31DCD8u);
    ctx->pc = 0x31DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCD0u;
    // 0x31dcd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x31DCD0u, 0x31DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCD8u;
label_31dcd8:
    // 0x31dcd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31dcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31dce0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31dce4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31dce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31dce8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x31dce8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31dcec: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x31dcecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x31dcf0: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x31DCF0u;
    SET_GPR_U32(ctx, 31, 0x31DCF8u);
    ctx->pc = 0x31DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCF0u;
    // 0x31dcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x31DCF0u, 0x31DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCF8u;
label_31dcf8:
    // 0x31dcf8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DCF8u;
    {
        const bool branch_taken_0x31dcf8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCF8u;
        // 0x31dcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcf8) {
            ctx->pc = 0x31DD14u;
            goto label_31dd14;
        }
    }
    ctx->pc = 0x31DD00u;
    // 0x31dd00: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x31dd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x31dd04: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31dd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31dd08: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x31DD08u;
    SET_GPR_U32(ctx, 31, 0x31DD10u);
    ctx->pc = 0x31DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD08u;
    // 0x31dd0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x31DD08u, 0x31DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD10u;
label_31dd10:
    // 0x31dd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31dd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31dd14:
    // 0x31dd14: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x31DD14u;
    SET_GPR_U32(ctx, 31, 0x31DD1Cu);
    ctx->pc = 0x31DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD14u;
    // 0x31dd18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x31DD14u, 0x31DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD1Cu;
label_31dd1c:
    // 0x31dd1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31dd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31dd20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31dd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31dd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dd28: 0x3e00008  jr          $ra
    ctx->pc = 0x31DD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD28u;
        // 0x31dd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DD30u;
}
