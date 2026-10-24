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

// Function: func_0033B050
// Address: 0x33b050 - 0x33b0f0
void func_0033B050_0x33b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B050_0x33b050");
#endif

    switch (ctx->pc) {
        case 0x33b050u: goto label_33b050;
        case 0x33b054u: goto label_33b054;
        case 0x33b058u: goto label_33b058;
        case 0x33b05cu: goto label_33b05c;
        case 0x33b060u: goto label_33b060;
        case 0x33b064u: goto label_33b064;
        case 0x33b068u: goto label_33b068;
        case 0x33b06cu: goto label_33b06c;
        case 0x33b070u: goto label_33b070;
        case 0x33b074u: goto label_33b074;
        case 0x33b078u: goto label_33b078;
        case 0x33b07cu: goto label_33b07c;
        case 0x33b080u: goto label_33b080;
        case 0x33b084u: goto label_33b084;
        case 0x33b088u: goto label_33b088;
        case 0x33b08cu: goto label_33b08c;
        case 0x33b090u: goto label_33b090;
        case 0x33b094u: goto label_33b094;
        case 0x33b098u: goto label_33b098;
        case 0x33b09cu: goto label_33b09c;
        case 0x33b0a0u: goto label_33b0a0;
        case 0x33b0a4u: goto label_33b0a4;
        case 0x33b0a8u: goto label_33b0a8;
        case 0x33b0acu: goto label_33b0ac;
        case 0x33b0b0u: goto label_33b0b0;
        case 0x33b0b4u: goto label_33b0b4;
        case 0x33b0b8u: goto label_33b0b8;
        case 0x33b0bcu: goto label_33b0bc;
        case 0x33b0c0u: goto label_33b0c0;
        case 0x33b0c4u: goto label_33b0c4;
        case 0x33b0c8u: goto label_33b0c8;
        case 0x33b0ccu: goto label_33b0cc;
        case 0x33b0d0u: goto label_33b0d0;
        case 0x33b0d4u: goto label_33b0d4;
        case 0x33b0d8u: goto label_33b0d8;
        case 0x33b0dcu: goto label_33b0dc;
        case 0x33b0e0u: goto label_33b0e0;
        case 0x33b0e4u: goto label_33b0e4;
        case 0x33b0e8u: goto label_33b0e8;
        case 0x33b0ecu: goto label_33b0ec;
        default: break;
    }

    ctx->pc = 0x33b050u;

label_33b050:
    // 0x33b050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33b054:
    // 0x33b054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33b058:
    // 0x33b058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33b058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33b05c:
    // 0x33b05c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33b060:
    // 0x33b060: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_33b064:
    if (ctx->pc == 0x33B064u) {
        ctx->pc = 0x33B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B060u;
        // 0x33b064: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B068u;
        goto label_33b068;
    }
    ctx->pc = 0x33B060u;
    {
        const bool branch_taken_0x33b060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B060u;
        // 0x33b064: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b060) {
            ctx->pc = 0x33B088u;
            goto label_33b088;
        }
    }
    ctx->pc = 0x33B068u;
label_33b068:
    // 0x33b068: 0x0  nop
    ctx->pc = 0x33b068u;
    // NOP
label_33b06c:
    // 0x33b06c: 0x0  nop
    ctx->pc = 0x33b06cu;
    // NOP
label_33b070:
    // 0x33b070: 0x0  nop
    ctx->pc = 0x33b070u;
    // NOP
label_33b074:
    // 0x33b074: 0x0  nop
    ctx->pc = 0x33b074u;
    // NOP
label_33b078:
    // 0x33b078: 0x0  nop
    ctx->pc = 0x33b078u;
    // NOP
label_33b07c:
    // 0x33b07c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_33b080:
    if (ctx->pc == 0x33B080u) {
        ctx->pc = 0x33B084u;
        goto label_33b084;
    }
    ctx->pc = 0x33B07Cu;
    {
        const bool branch_taken_0x33b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b07c) {
            ctx->pc = 0x33B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b068;
        }
    }
    ctx->pc = 0x33B084u;
label_33b084:
    // 0x33b084: 0x0  nop
    ctx->pc = 0x33b084u;
    // NOP
label_33b088:
    // 0x33b088: 0xc0ce27e  jal         func_3389F8
label_33b08c:
    if (ctx->pc == 0x33B08Cu) {
        ctx->pc = 0x33B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B088u;
        // 0x33b08c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B090u;
        goto label_33b090;
    }
    ctx->pc = 0x33B088u;
    SET_GPR_U32(ctx, 31, 0x33B090u);
    ctx->pc = 0x33B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B088u;
    // 0x33b08c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33B088u, 0x33B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B090u;
label_33b090:
    // 0x33b090: 0x5a200012  blezl       $s1, . + 4 + (0x12 << 2)
label_33b094:
    if (ctx->pc == 0x33B094u) {
        ctx->pc = 0x33B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B090u;
        // 0x33b094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B098u;
        goto label_33b098;
    }
    ctx->pc = 0x33B090u;
    {
        const bool branch_taken_0x33b090 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x33b090) {
            ctx->pc = 0x33B094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B090u;
            // 0x33b094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B0DCu;
            goto label_33b0dc;
        }
    }
    ctx->pc = 0x33B098u;
label_33b098:
    // 0x33b098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b09c:
    // 0x33b09c: 0x0  nop
    ctx->pc = 0x33b09cu;
    // NOP
label_33b0a0:
    // 0x33b0a0: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x33b0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_33b0a4:
    // 0x33b0a4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x33b0a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_33b0a8:
    // 0x33b0a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_33b0ac:
    if (ctx->pc == 0x33B0ACu) {
        ctx->pc = 0x33B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0A8u;
        // 0x33b0ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0B0u;
        goto label_33b0b0;
    }
    ctx->pc = 0x33B0A8u;
    {
        const bool branch_taken_0x33b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b0a8) {
            ctx->pc = 0x33B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B0A8u;
            // 0x33b0ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B0D0u;
            goto label_33b0d0;
        }
    }
    ctx->pc = 0x33B0B0u;
label_33b0b0:
    // 0x33b0b0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x33b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_33b0b4:
    // 0x33b0b4: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x33b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_33b0b8:
    // 0x33b0b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33b0bc:
    // 0x33b0bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33b0c0:
    // 0x33b0c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_33b0c4:
    // 0x33b0c4: 0x40f809  jalr        $v0
label_33b0c8:
    if (ctx->pc == 0x33B0C8u) {
        ctx->pc = 0x33B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0C4u;
        // 0x33b0c8: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0CCu;
        goto label_33b0cc;
    }
    ctx->pc = 0x33B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B0CCu);
        ctx->pc = 0x33B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0C4u;
        // 0x33b0c8: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B0C4u, 0x33B0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B0CCu;
label_33b0cc:
    // 0x33b0cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33b0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_33b0d0:
    // 0x33b0d0: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_33b0d4:
    if (ctx->pc == 0x33B0D4u) {
        ctx->pc = 0x33B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0D0u;
        // 0x33b0d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0D8u;
        goto label_33b0d8;
    }
    ctx->pc = 0x33B0D0u;
    {
        const bool branch_taken_0x33b0d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0D0u;
        // 0x33b0d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0d0) {
            ctx->pc = 0x33B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b0a0;
        }
    }
    ctx->pc = 0x33B0D8u;
label_33b0d8:
    // 0x33b0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b0dc:
    // 0x33b0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33b0e0:
    // 0x33b0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b0e4:
    // 0x33b0e4: 0x80ce284  j           func_338A10
label_33b0e8:
    if (ctx->pc == 0x33B0E8u) {
        ctx->pc = 0x33B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0E4u;
        // 0x33b0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0ECu;
        goto label_33b0ec;
    }
    ctx->pc = 0x33B0E4u;
    ctx->pc = 0x33B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B0E4u;
    // 0x33b0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33B0E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B0ECu;
label_33b0ec:
    // 0x33b0ec: 0x0  nop
    ctx->pc = 0x33b0ecu;
    // NOP
    ctx->pc = 0x33b0f0u;
}
