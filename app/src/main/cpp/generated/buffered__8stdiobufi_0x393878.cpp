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

// Function: buffered__8stdiobufi
// Address: 0x393878 - 0x3938e0
void buffered__8stdiobufi_0x393878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("buffered__8stdiobufi_0x393878");
#endif

    switch (ctx->pc) {
        case 0x393878u: goto label_393878;
        case 0x39387cu: goto label_39387c;
        case 0x393880u: goto label_393880;
        case 0x393884u: goto label_393884;
        case 0x393888u: goto label_393888;
        case 0x39388cu: goto label_39388c;
        case 0x393890u: goto label_393890;
        case 0x393894u: goto label_393894;
        case 0x393898u: goto label_393898;
        case 0x39389cu: goto label_39389c;
        case 0x3938a0u: goto label_3938a0;
        case 0x3938a4u: goto label_3938a4;
        case 0x3938a8u: goto label_3938a8;
        case 0x3938acu: goto label_3938ac;
        case 0x3938b0u: goto label_3938b0;
        case 0x3938b4u: goto label_3938b4;
        case 0x3938b8u: goto label_3938b8;
        case 0x3938bcu: goto label_3938bc;
        case 0x3938c0u: goto label_3938c0;
        case 0x3938c4u: goto label_3938c4;
        case 0x3938c8u: goto label_3938c8;
        case 0x3938ccu: goto label_3938cc;
        case 0x3938d0u: goto label_3938d0;
        case 0x3938d4u: goto label_3938d4;
        case 0x3938d8u: goto label_3938d8;
        case 0x3938dcu: goto label_3938dc;
        default: break;
    }

    ctx->pc = 0x393878u;

label_393878:
    // 0x393878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39387c:
    // 0x39387c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x39387cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393880:
    // 0x393880: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_393884:
    if (ctx->pc == 0x393884u) {
        ctx->pc = 0x393884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393880u;
        // 0x393884: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393888u;
        goto label_393888;
    }
    ctx->pc = 0x393880u;
    {
        const bool branch_taken_0x393880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x393884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393880u;
        // 0x393884: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393880) {
            ctx->pc = 0x3938A4u;
            goto label_3938a4;
        }
    }
    ctx->pc = 0x393888u;
label_393888:
    // 0x393888: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x393888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39388c:
    // 0x39388c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x39388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_393890:
    // 0x393890: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_393894:
    if (ctx->pc == 0x393894u) {
        ctx->pc = 0x393894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393890u;
        // 0x393894: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393898u;
        goto label_393898;
    }
    ctx->pc = 0x393890u;
    {
        const bool branch_taken_0x393890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393890u;
        // 0x393894: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393890) {
            ctx->pc = 0x3938D0u;
            goto label_3938d0;
        }
    }
    ctx->pc = 0x393898u;
label_393898:
    // 0x393898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x393898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39389c:
    // 0x39389c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3938a0:
    if (ctx->pc == 0x3938A0u) {
        ctx->pc = 0x3938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39389Cu;
        // 0x3938a0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938A4u;
        goto label_3938a4;
    }
    ctx->pc = 0x39389Cu;
    {
        const bool branch_taken_0x39389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39389Cu;
        // 0x3938a0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39389c) {
            ctx->pc = 0x3938D0u;
            goto label_3938d0;
        }
    }
    ctx->pc = 0x3938A4u;
label_3938a4:
    // 0x3938a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3938a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3938a8:
    // 0x3938a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3938a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3938ac:
    // 0x3938ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3938b0:
    if (ctx->pc == 0x3938B0u) {
        ctx->pc = 0x3938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938ACu;
        // 0x3938b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938B4u;
        goto label_3938b4;
    }
    ctx->pc = 0x3938ACu;
    {
        const bool branch_taken_0x3938ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3938B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938ACu;
        // 0x3938b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938ac) {
            ctx->pc = 0x3938D4u;
            goto label_3938d4;
        }
    }
    ctx->pc = 0x3938B4u;
label_3938b4:
    // 0x3938b4: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x3938b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_3938b8:
    // 0x3938b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3938b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3938bc:
    // 0x3938bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3938bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3938c0:
    // 0x3938c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3938c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3938c4:
    // 0x3938c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3938c8:
    // 0x3938c8: 0x40f809  jalr        $v0
label_3938cc:
    if (ctx->pc == 0x3938CCu) {
        ctx->pc = 0x3938CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938C8u;
        // 0x3938cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938D0u;
        goto label_3938d0;
    }
    ctx->pc = 0x3938C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3938D0u);
        ctx->pc = 0x3938CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938C8u;
        // 0x3938cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3938C8u, 0x3938D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3938D0u;
label_3938d0:
    // 0x3938d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3938d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3938d4:
    // 0x3938d4: 0x3e00008  jr          $ra
label_3938d8:
    if (ctx->pc == 0x3938D8u) {
        ctx->pc = 0x3938D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938D4u;
        // 0x3938d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3938DCu;
        goto label_3938dc;
    }
    ctx->pc = 0x3938D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3938D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938D4u;
        // 0x3938d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3938D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3938DCu;
label_3938dc:
    // 0x3938dc: 0x0  nop
    ctx->pc = 0x3938dcu;
    // NOP
    ctx->pc = 0x3938e0u;
}
