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

// Function: func_002CA040
// Address: 0x2ca040 - 0x2ca148
void func_002CA040_0x2ca040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA040_0x2ca040");
#endif

    switch (ctx->pc) {
        case 0x2ca060u: goto label_2ca060;
        case 0x2ca068u: goto label_2ca068;
        case 0x2ca088u: goto label_2ca088;
        case 0x2ca090u: goto label_2ca090;
        case 0x2ca0bcu: goto label_2ca0bc;
        case 0x2ca0c8u: goto label_2ca0c8;
        case 0x2ca0d0u: goto label_2ca0d0;
        case 0x2ca0d8u: goto label_2ca0d8;
        case 0x2ca0e0u: goto label_2ca0e0;
        case 0x2ca0e8u: goto label_2ca0e8;
        case 0x2ca0f8u: goto label_2ca0f8;
        case 0x2ca104u: goto label_2ca104;
        case 0x2ca110u: goto label_2ca110;
        case 0x2ca11cu: goto label_2ca11c;
        case 0x2ca124u: goto label_2ca124;
        case 0x2ca12cu: goto label_2ca12c;
        case 0x2ca134u: goto label_2ca134;
        default: break;
    }

    ctx->pc = 0x2ca040u;

    // 0x2ca040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca050: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca054: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2ca054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ca058: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA058u;
    {
        const bool branch_taken_0x2ca058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca058) {
            ctx->pc = 0x2CA05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA058u;
            // 0x2ca05c: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA07Cu;
            goto label_2ca07c;
        }
    }
    ctx->pc = 0x2CA060u;
label_2ca060:
    // 0x2ca060: 0xc0b390c  jal         func_2CE430
    ctx->pc = 0x2CA060u;
    SET_GPR_U32(ctx, 31, 0x2CA068u);
    ctx->pc = 0x2CA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA060u;
    // 0x2ca064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE430u, 0x2CA060u, 0x2CA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA068u;
label_2ca068:
    // 0x2ca068: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2ca068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca06c: 0x0  nop
    ctx->pc = 0x2ca06cu;
    // NOP
    // 0x2ca070: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA070u;
    {
        const bool branch_taken_0x2ca070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca070) {
            ctx->pc = 0x2CA060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca060;
        }
    }
    ctx->pc = 0x2CA078u;
    // 0x2ca078: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2ca078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ca07c:
    // 0x2ca07c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA07Cu;
    {
        const bool branch_taken_0x2ca07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca07c) {
            ctx->pc = 0x2CA080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA07Cu;
            // 0x2ca080: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA0A4u;
            goto label_2ca0a4;
        }
    }
    ctx->pc = 0x2CA084u;
    // 0x2ca084: 0x0  nop
    ctx->pc = 0x2ca084u;
    // NOP
label_2ca088:
    // 0x2ca088: 0xc0b32c4  jal         func_2CCB10
    ctx->pc = 0x2CA088u;
    SET_GPR_U32(ctx, 31, 0x2CA090u);
    ctx->pc = 0x2CA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA088u;
    // 0x2ca08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB10u, 0x2CA088u, 0x2CA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA090u;
label_2ca090:
    // 0x2ca090: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2ca094: 0x0  nop
    ctx->pc = 0x2ca094u;
    // NOP
    // 0x2ca098: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA098u;
    {
        const bool branch_taken_0x2ca098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca098) {
            ctx->pc = 0x2CA088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca088;
        }
    }
    ctx->pc = 0x2CA0A0u;
    // 0x2ca0a0: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2ca0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_2ca0a4:
    // 0x2ca0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0a8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2ca0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x2ca0ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ca0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca0b0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2ca0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2ca0b4: 0xc0b2c1c  jal         func_2CB070
    ctx->pc = 0x2CA0B4u;
    SET_GPR_U32(ctx, 31, 0x2CA0BCu);
    ctx->pc = 0x2CA0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0B4u;
    // 0x2ca0b8: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB070u, 0x2CA0B4u, 0x2CA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0BCu;
label_2ca0bc:
    // 0x2ca0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ca0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0c0: 0xc0dd414  jal         func_375050
    ctx->pc = 0x2CA0C0u;
    SET_GPR_U32(ctx, 31, 0x2CA0C8u);
    ctx->pc = 0x2CA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0C0u;
    // 0x2ca0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x2CA0C0u, 0x2CA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0C8u;
label_2ca0c8:
    // 0x2ca0c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA0C8u;
    {
        const bool branch_taken_0x2ca0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca0c8) {
            ctx->pc = 0x2CA0E0u;
            goto label_2ca0e0;
        }
    }
    ctx->pc = 0x2CA0D0u;
label_2ca0d0:
    // 0x2ca0d0: 0xc0b291c  jal         func_2CA470
    ctx->pc = 0x2CA0D0u;
    SET_GPR_U32(ctx, 31, 0x2CA0D8u);
    ctx->pc = 0x2CA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0D0u;
    // 0x2ca0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA470u, 0x2CA0D0u, 0x2CA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0D8u;
label_2ca0d8:
    // 0x2ca0d8: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x2CA0D8u;
    SET_GPR_U32(ctx, 31, 0x2CA0E0u);
    ctx->pc = 0x2CA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0D8u;
    // 0x2ca0dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x2CA0D8u, 0x2CA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0E0u;
label_2ca0e0:
    // 0x2ca0e0: 0xc0dd460  jal         func_375180
    ctx->pc = 0x2CA0E0u;
    SET_GPR_U32(ctx, 31, 0x2CA0E8u);
    ctx->pc = 0x375180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375180u, 0x2CA0E0u, 0x2CA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0E8u;
label_2ca0e8:
    // 0x2ca0e8: 0x1050fff9  beq         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA0E8u;
    {
        const bool branch_taken_0x2ca0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ca0e8) {
            ctx->pc = 0x2CA0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca0d0;
        }
    }
    ctx->pc = 0x2CA0F0u;
    // 0x2ca0f0: 0xc0b2852  jal         func_2CA148
    ctx->pc = 0x2CA0F0u;
    SET_GPR_U32(ctx, 31, 0x2CA0F8u);
    ctx->pc = 0x2CA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0F0u;
    // 0x2ca0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA148u, 0x2CA0F0u, 0x2CA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0F8u;
label_2ca0f8:
    // 0x2ca0f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ca0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca0fc: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CA0FCu;
    SET_GPR_U32(ctx, 31, 0x2CA104u);
    ctx->pc = 0x2CA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0FCu;
    // 0x2ca100: 0x248436a0  addiu       $a0, $a0, 0x36A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CA0FCu, 0x2CA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA104u;
label_2ca104:
    // 0x2ca104: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ca104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca108: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CA108u;
    SET_GPR_U32(ctx, 31, 0x2CA110u);
    ctx->pc = 0x2CA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA108u;
    // 0x2ca10c: 0x24843310  addiu       $a0, $a0, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CA108u, 0x2CA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA110u;
label_2ca110:
    // 0x2ca110: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca114: 0xc0b35e0  jal         func_2CD780
    ctx->pc = 0x2CA114u;
    SET_GPR_U32(ctx, 31, 0x2CA11Cu);
    ctx->pc = 0x2CA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA114u;
    // 0x2ca118: 0x24842f80  addiu       $a0, $a0, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD780u, 0x2CA114u, 0x2CA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA11Cu;
label_2ca11c:
    // 0x2ca11c: 0xc0cb494  jal         func_32D250
    ctx->pc = 0x2CA11Cu;
    SET_GPR_U32(ctx, 31, 0x2CA124u);
    ctx->pc = 0x32D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D250u, 0x2CA11Cu, 0x2CA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA124u;
label_2ca124:
    // 0x2ca124: 0xc0c92b2  jal         func_324AC8
    ctx->pc = 0x2CA124u;
    SET_GPR_U32(ctx, 31, 0x2CA12Cu);
    ctx->pc = 0x324AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324AC8u, 0x2CA124u, 0x2CA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA12Cu;
label_2ca12c:
    // 0x2ca12c: 0xc0c9606  jal         func_325818
    ctx->pc = 0x2CA12Cu;
    SET_GPR_U32(ctx, 31, 0x2CA134u);
    ctx->pc = 0x325818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325818u, 0x2CA12Cu, 0x2CA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA134u;
label_2ca134:
    // 0x2ca134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca140: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA140u;
        // 0x2ca144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA148u;
}
