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

// Function: func_0036EE90
// Address: 0x36ee90 - 0x36f008
void func_0036EE90_0x36ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036EE90_0x36ee90");
#endif

    switch (ctx->pc) {
        case 0x36ee90u: goto label_36ee90;
        case 0x36ee94u: goto label_36ee94;
        case 0x36ee98u: goto label_36ee98;
        case 0x36ee9cu: goto label_36ee9c;
        case 0x36eea0u: goto label_36eea0;
        case 0x36eea4u: goto label_36eea4;
        case 0x36eea8u: goto label_36eea8;
        case 0x36eeacu: goto label_36eeac;
        case 0x36eeb0u: goto label_36eeb0;
        case 0x36eeb4u: goto label_36eeb4;
        case 0x36eeb8u: goto label_36eeb8;
        case 0x36eebcu: goto label_36eebc;
        case 0x36eec0u: goto label_36eec0;
        case 0x36eec4u: goto label_36eec4;
        case 0x36eec8u: goto label_36eec8;
        case 0x36eeccu: goto label_36eecc;
        case 0x36eed0u: goto label_36eed0;
        case 0x36eed4u: goto label_36eed4;
        case 0x36eed8u: goto label_36eed8;
        case 0x36eedcu: goto label_36eedc;
        case 0x36eee0u: goto label_36eee0;
        case 0x36eee4u: goto label_36eee4;
        case 0x36eee8u: goto label_36eee8;
        case 0x36eeecu: goto label_36eeec;
        case 0x36eef0u: goto label_36eef0;
        case 0x36eef4u: goto label_36eef4;
        case 0x36eef8u: goto label_36eef8;
        case 0x36eefcu: goto label_36eefc;
        case 0x36ef00u: goto label_36ef00;
        case 0x36ef04u: goto label_36ef04;
        case 0x36ef08u: goto label_36ef08;
        case 0x36ef0cu: goto label_36ef0c;
        case 0x36ef10u: goto label_36ef10;
        case 0x36ef14u: goto label_36ef14;
        case 0x36ef18u: goto label_36ef18;
        case 0x36ef1cu: goto label_36ef1c;
        case 0x36ef20u: goto label_36ef20;
        case 0x36ef24u: goto label_36ef24;
        case 0x36ef28u: goto label_36ef28;
        case 0x36ef2cu: goto label_36ef2c;
        case 0x36ef30u: goto label_36ef30;
        case 0x36ef34u: goto label_36ef34;
        case 0x36ef38u: goto label_36ef38;
        case 0x36ef3cu: goto label_36ef3c;
        case 0x36ef40u: goto label_36ef40;
        case 0x36ef44u: goto label_36ef44;
        case 0x36ef48u: goto label_36ef48;
        case 0x36ef4cu: goto label_36ef4c;
        case 0x36ef50u: goto label_36ef50;
        case 0x36ef54u: goto label_36ef54;
        case 0x36ef58u: goto label_36ef58;
        case 0x36ef5cu: goto label_36ef5c;
        case 0x36ef60u: goto label_36ef60;
        case 0x36ef64u: goto label_36ef64;
        case 0x36ef68u: goto label_36ef68;
        case 0x36ef6cu: goto label_36ef6c;
        case 0x36ef70u: goto label_36ef70;
        case 0x36ef74u: goto label_36ef74;
        case 0x36ef78u: goto label_36ef78;
        case 0x36ef7cu: goto label_36ef7c;
        case 0x36ef80u: goto label_36ef80;
        case 0x36ef84u: goto label_36ef84;
        case 0x36ef88u: goto label_36ef88;
        case 0x36ef8cu: goto label_36ef8c;
        case 0x36ef90u: goto label_36ef90;
        case 0x36ef94u: goto label_36ef94;
        case 0x36ef98u: goto label_36ef98;
        case 0x36ef9cu: goto label_36ef9c;
        case 0x36efa0u: goto label_36efa0;
        case 0x36efa4u: goto label_36efa4;
        case 0x36efa8u: goto label_36efa8;
        case 0x36efacu: goto label_36efac;
        case 0x36efb0u: goto label_36efb0;
        case 0x36efb4u: goto label_36efb4;
        case 0x36efb8u: goto label_36efb8;
        case 0x36efbcu: goto label_36efbc;
        case 0x36efc0u: goto label_36efc0;
        case 0x36efc4u: goto label_36efc4;
        case 0x36efc8u: goto label_36efc8;
        case 0x36efccu: goto label_36efcc;
        case 0x36efd0u: goto label_36efd0;
        case 0x36efd4u: goto label_36efd4;
        case 0x36efd8u: goto label_36efd8;
        case 0x36efdcu: goto label_36efdc;
        case 0x36efe0u: goto label_36efe0;
        case 0x36efe4u: goto label_36efe4;
        case 0x36efe8u: goto label_36efe8;
        case 0x36efecu: goto label_36efec;
        case 0x36eff0u: goto label_36eff0;
        case 0x36eff4u: goto label_36eff4;
        case 0x36eff8u: goto label_36eff8;
        case 0x36effcu: goto label_36effc;
        case 0x36f000u: goto label_36f000;
        case 0x36f004u: goto label_36f004;
        default: break;
    }

    ctx->pc = 0x36ee90u;

label_36ee90:
    // 0x36ee90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36ee94:
    // 0x36ee94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36ee98:
    // 0x36ee98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ee9c:
    // 0x36ee9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_36eea0:
    // 0x36eea0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x36eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_36eea4:
    // 0x36eea4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x36eea4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36eea8:
    // 0x36eea8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x36eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_36eeac:
    // 0x36eeac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36eeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_36eeb0:
    // 0x36eeb0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_36eeb4:
    // 0x36eeb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36eeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36eeb8:
    // 0x36eeb8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x36eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_36eebc:
    // 0x36eebc: 0x8e530580  lw          $s3, 0x580($s2)
    ctx->pc = 0x36eebcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_36eec0:
    // 0x36eec0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x36eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_36eec4:
    // 0x36eec4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x36eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_36eec8:
    // 0x36eec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36eecc:
    // 0x36eecc: 0x24540110  addiu       $s4, $v0, 0x110
    ctx->pc = 0x36eeccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_36eed0:
    // 0x36eed0: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x36eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_36eed4:
    // 0x36eed4: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x36eed4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_36eed8:
    // 0x36eed8: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_36eedc:
    if (ctx->pc == 0x36EEDCu) {
        ctx->pc = 0x36EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EED8u;
        // 0x36eedc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EEE0u;
        goto label_36eee0;
    }
    ctx->pc = 0x36EED8u;
    {
        const bool branch_taken_0x36eed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EED8u;
        // 0x36eedc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eed8) {
            ctx->pc = 0x36EF98u;
            goto label_36ef98;
        }
    }
    ctx->pc = 0x36EEE0u;
label_36eee0:
    // 0x36eee0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36eee4:
    // 0x36eee4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36eee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36eee8:
    // 0x36eee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36eeec:
    // 0x36eeec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36eef0:
    // 0x36eef0: 0x40f809  jalr        $v0
label_36eef4:
    if (ctx->pc == 0x36EEF4u) {
        ctx->pc = 0x36EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEF0u;
        // 0x36eef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EEF8u;
        goto label_36eef8;
    }
    ctx->pc = 0x36EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36EEF8u);
        ctx->pc = 0x36EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEF0u;
        // 0x36eef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEF0u, 0x36EEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EEF8u;
label_36eef8:
    // 0x36eef8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36eef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36eefc:
    // 0x36eefc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x36eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36ef00:
    // 0x36ef00: 0xc0e9452  jal         func_3A5148
label_36ef04:
    if (ctx->pc == 0x36EF04u) {
        ctx->pc = 0x36EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF00u;
        // 0x36ef04: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF08u;
        goto label_36ef08;
    }
    ctx->pc = 0x36EF00u;
    SET_GPR_U32(ctx, 31, 0x36EF08u);
    ctx->pc = 0x36EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF00u;
    // 0x36ef04: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36EF00u, 0x36EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF08u;
label_36ef08:
    // 0x36ef08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36ef0c:
    // 0x36ef0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ef10:
    // 0x36ef10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ef14:
    // 0x36ef14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36ef18:
    // 0x36ef18: 0x40f809  jalr        $v0
label_36ef1c:
    if (ctx->pc == 0x36EF1Cu) {
        ctx->pc = 0x36EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF18u;
        // 0x36ef1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF20u;
        goto label_36ef20;
    }
    ctx->pc = 0x36EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36EF20u);
        ctx->pc = 0x36EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF18u;
        // 0x36ef1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF18u, 0x36EF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EF20u;
label_36ef20:
    // 0x36ef20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x36ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36ef24:
    // 0x36ef24: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x36ef24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_36ef28:
    // 0x36ef28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_36ef2c:
    if (ctx->pc == 0x36EF2Cu) {
        ctx->pc = 0x36EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF28u;
        // 0x36ef2c: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF30u;
        goto label_36ef30;
    }
    ctx->pc = 0x36EF28u;
    {
        const bool branch_taken_0x36ef28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF28u;
        // 0x36ef2c: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef28) {
            ctx->pc = 0x36EF80u;
            goto label_36ef80;
        }
    }
    ctx->pc = 0x36EF30u;
label_36ef30:
    // 0x36ef30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36ef34:
    // 0x36ef34: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x36ef34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36ef38:
    // 0x36ef38: 0x2a43023  subu        $a2, $s5, $a0
    ctx->pc = 0x36ef38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_36ef3c:
    // 0x36ef3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ef40:
    // 0x36ef40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36ef44:
    // 0x36ef44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ef44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ef48:
    // 0x36ef48: 0x40f809  jalr        $v0
label_36ef4c:
    if (ctx->pc == 0x36EF4Cu) {
        ctx->pc = 0x36EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF48u;
        // 0x36ef4c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF50u;
        goto label_36ef50;
    }
    ctx->pc = 0x36EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36EF50u);
        ctx->pc = 0x36EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF48u;
        // 0x36ef4c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF48u, 0x36EF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EF50u;
label_36ef50:
    // 0x36ef50: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x36ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36ef54:
    // 0x36ef54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x36ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_36ef58:
    // 0x36ef58: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x36ef58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_36ef5c:
    // 0x36ef5c: 0xc0e9452  jal         func_3A5148
label_36ef60:
    if (ctx->pc == 0x36EF60u) {
        ctx->pc = 0x36EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF5Cu;
        // 0x36ef60: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF64u;
        goto label_36ef64;
    }
    ctx->pc = 0x36EF5Cu;
    SET_GPR_U32(ctx, 31, 0x36EF64u);
    ctx->pc = 0x36EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF5Cu;
    // 0x36ef60: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36EF5Cu, 0x36EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF64u;
label_36ef64:
    // 0x36ef64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36ef68:
    // 0x36ef68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ef6c:
    // 0x36ef6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ef6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36ef70:
    // 0x36ef70: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36ef74:
    // 0x36ef74: 0x40f809  jalr        $v0
label_36ef78:
    if (ctx->pc == 0x36EF78u) {
        ctx->pc = 0x36EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF74u;
        // 0x36ef78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF7Cu;
        goto label_36ef7c;
    }
    ctx->pc = 0x36EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36EF7Cu);
        ctx->pc = 0x36EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF74u;
        // 0x36ef78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF74u, 0x36EF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EF7Cu;
label_36ef7c:
    // 0x36ef7c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x36ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_36ef80:
    // 0x36ef80: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x36ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_36ef84:
    // 0x36ef84: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_36ef88:
    if (ctx->pc == 0x36EF88u) {
        ctx->pc = 0x36EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF84u;
        // 0x36ef88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF8Cu;
        goto label_36ef8c;
    }
    ctx->pc = 0x36EF84u;
    {
        const bool branch_taken_0x36ef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ef84) {
            ctx->pc = 0x36EF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EF84u;
            // 0x36ef88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EF9Cu;
            goto label_36ef9c;
        }
    }
    ctx->pc = 0x36EF8Cu;
label_36ef8c:
    // 0x36ef8c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x36ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_36ef90:
    // 0x36ef90: 0x60f809  jalr        $v1
label_36ef94:
    if (ctx->pc == 0x36EF94u) {
        ctx->pc = 0x36EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF90u;
        // 0x36ef94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EF98u;
        goto label_36ef98;
    }
    ctx->pc = 0x36EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36EF98u);
        ctx->pc = 0x36EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF90u;
        // 0x36ef94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF90u, 0x36EF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36EF98u;
label_36ef98:
    // 0x36ef98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36ef9c:
    // 0x36ef9c: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_36efa0:
    if (ctx->pc == 0x36EFA0u) {
        ctx->pc = 0x36EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF9Cu;
        // 0x36efa0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EFA4u;
        goto label_36efa4;
    }
    ctx->pc = 0x36EF9Cu;
    {
        const bool branch_taken_0x36ef9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x36EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF9Cu;
        // 0x36efa0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef9c) {
            ctx->pc = 0x36EFE0u;
            goto label_36efe0;
        }
    }
    ctx->pc = 0x36EFA4u;
label_36efa4:
    // 0x36efa4: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x36efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_36efa8:
    // 0x36efa8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_36efac:
    if (ctx->pc == 0x36EFACu) {
        ctx->pc = 0x36EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFA8u;
        // 0x36efac: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EFB0u;
        goto label_36efb0;
    }
    ctx->pc = 0x36EFA8u;
    {
        const bool branch_taken_0x36efa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFA8u;
        // 0x36efac: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36efa8) {
            ctx->pc = 0x36EFE4u;
            goto label_36efe4;
        }
    }
    ctx->pc = 0x36EFB0u;
label_36efb0:
    // 0x36efb0: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x36efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
label_36efb4:
    // 0x36efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_36efb8:
    if (ctx->pc == 0x36EFB8u) {
        ctx->pc = 0x36EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFB4u;
        // 0x36efb8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EFBCu;
        goto label_36efbc;
    }
    ctx->pc = 0x36EFB4u;
    {
        const bool branch_taken_0x36efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFB4u;
        // 0x36efb8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36efb4) {
            ctx->pc = 0x36EFCCu;
            goto label_36efcc;
        }
    }
    ctx->pc = 0x36EFBCu;
label_36efbc:
    // 0x36efbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36efc0:
    // 0x36efc0: 0x24a5a578  addiu       $a1, $a1, -0x5A88
    ctx->pc = 0x36efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944120));
label_36efc4:
    // 0x36efc4: 0xc0dbc02  jal         func_36F008
label_36efc8:
    if (ctx->pc == 0x36EFC8u) {
        ctx->pc = 0x36EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFC4u;
        // 0x36efc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EFCCu;
        goto label_36efcc;
    }
    ctx->pc = 0x36EFC4u;
    SET_GPR_U32(ctx, 31, 0x36EFCCu);
    ctx->pc = 0x36EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFC4u;
    // 0x36efc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F008u, 0x36EFC4u, 0x36EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFCCu;
label_36efcc:
    // 0x36efcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36efd0:
    // 0x36efd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36efd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36efd4:
    // 0x36efd4: 0xc0dbc02  jal         func_36F008
label_36efd8:
    if (ctx->pc == 0x36EFD8u) {
        ctx->pc = 0x36EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFD4u;
        // 0x36efd8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36EFDCu;
        goto label_36efdc;
    }
    ctx->pc = 0x36EFD4u;
    SET_GPR_U32(ctx, 31, 0x36EFDCu);
    ctx->pc = 0x36EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFD4u;
    // 0x36efd8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F008u, 0x36EFD4u, 0x36EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFDCu;
label_36efdc:
    // 0x36efdc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36efdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36efe0:
    // 0x36efe0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36efe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36efe4:
    // 0x36efe4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36efe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36efe8:
    // 0x36efe8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36efe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36efec:
    // 0x36efec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x36efecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36eff0:
    // 0x36eff0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x36eff0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_36eff4:
    // 0x36eff4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x36eff4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36eff8:
    // 0x36eff8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x36eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_36effc:
    // 0x36effc: 0x3e00008  jr          $ra
label_36f000:
    if (ctx->pc == 0x36F000u) {
        ctx->pc = 0x36F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFFCu;
        // 0x36f000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F004u;
        goto label_36f004;
    }
    ctx->pc = 0x36EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFFCu;
        // 0x36f000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F004u;
label_36f004:
    // 0x36f004: 0x0  nop
    ctx->pc = 0x36f004u;
    // NOP
    ctx->pc = 0x36f008u;
}
