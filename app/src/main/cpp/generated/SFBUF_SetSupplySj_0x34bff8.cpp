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

// Function: SFBUF_SetSupplySj
// Address: 0x34bff8 - 0x34c0a0
void SFBUF_SetSupplySj_0x34bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFBUF_SetSupplySj_0x34bff8");
#endif

    switch (ctx->pc) {
        case 0x34c018u: goto label_34c018;
        case 0x34c048u: goto label_34c048;
        case 0x34c060u: goto label_34c060;
        case 0x34c078u: goto label_34c078;
        default: break;
    }

    ctx->pc = 0x34bff8u;

    // 0x34bff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bffc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34c000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34c000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34c008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c00c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34c010: 0xc0d3028  jal         func_34C0A0
    ctx->pc = 0x34C010u;
    SET_GPR_U32(ctx, 31, 0x34C018u);
    ctx->pc = 0x34C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C010u;
    // 0x34c014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0A0u, 0x34C010u, 0x34C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C018u;
label_34c018:
    // 0x34c018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c01c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34C01Cu;
    {
        const bool branch_taken_0x34c01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C01Cu;
        // 0x34c020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c01c) {
            ctx->pc = 0x34C040u;
            goto label_34c040;
        }
    }
    ctx->pc = 0x34C024u;
    // 0x34c024: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34c024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34c028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34c02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34c030: 0x34a50408  ori         $a1, $a1, 0x408
    ctx->pc = 0x34c030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1032);
    // 0x34c034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c038: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34C038u;
    ctx->pc = 0x34C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C038u;
    // 0x34c03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34C038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C040u;
label_34c040:
    // 0x34c040: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x34C040u;
    SET_GPR_U32(ctx, 31, 0x34C048u);
    ctx->pc = 0x34C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C040u;
    // 0x34c044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x34C040u, 0x34C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C048u;
label_34c048:
    // 0x34c048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c04c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34C050u;
    {
        const bool branch_taken_0x34c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C050u;
        // 0x34c054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c050) {
            ctx->pc = 0x34C088u;
            goto label_34c088;
        }
    }
    ctx->pc = 0x34C058u;
    // 0x34c058: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x34C058u;
    SET_GPR_U32(ctx, 31, 0x34C060u);
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x34C058u, 0x34C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C060u;
label_34c060:
    // 0x34c060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c064: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34c064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c068: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C068u;
    {
        const bool branch_taken_0x34c068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C068u;
        // 0x34c06c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c068) {
            ctx->pc = 0x34C088u;
            goto label_34c088;
        }
    }
    ctx->pc = 0x34C070u;
    // 0x34c070: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x34C070u;
    SET_GPR_U32(ctx, 31, 0x34C078u);
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x34C070u, 0x34C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C078u;
label_34c078:
    // 0x34c078: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34c07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c080: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x34c080u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x34c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c088:
    // 0x34c088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34c08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34c090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34c094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c098: 0x80d303a  j           func_34C0E8
    ctx->pc = 0x34C098u;
    ctx->pc = 0x34C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C098u;
    // 0x34c09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0E8u, 0x34C098u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C0A0u;
}
