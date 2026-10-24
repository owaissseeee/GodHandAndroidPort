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

// Function: func_0017FCB8
// Address: 0x17fcb8 - 0x17fd78
void func_0017FCB8_0x17fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FCB8_0x17fcb8");
#endif

    switch (ctx->pc) {
        case 0x17fcb8u: goto label_17fcb8;
        case 0x17fcbcu: goto label_17fcbc;
        case 0x17fcc0u: goto label_17fcc0;
        case 0x17fcc4u: goto label_17fcc4;
        case 0x17fcc8u: goto label_17fcc8;
        case 0x17fcccu: goto label_17fccc;
        case 0x17fcd0u: goto label_17fcd0;
        case 0x17fcd4u: goto label_17fcd4;
        case 0x17fcd8u: goto label_17fcd8;
        case 0x17fcdcu: goto label_17fcdc;
        case 0x17fce0u: goto label_17fce0;
        case 0x17fce4u: goto label_17fce4;
        case 0x17fce8u: goto label_17fce8;
        case 0x17fcecu: goto label_17fcec;
        case 0x17fcf0u: goto label_17fcf0;
        case 0x17fcf4u: goto label_17fcf4;
        case 0x17fcf8u: goto label_17fcf8;
        case 0x17fcfcu: goto label_17fcfc;
        case 0x17fd00u: goto label_17fd00;
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd08u: goto label_17fd08;
        case 0x17fd0cu: goto label_17fd0c;
        case 0x17fd10u: goto label_17fd10;
        case 0x17fd14u: goto label_17fd14;
        case 0x17fd18u: goto label_17fd18;
        case 0x17fd1cu: goto label_17fd1c;
        case 0x17fd20u: goto label_17fd20;
        case 0x17fd24u: goto label_17fd24;
        case 0x17fd28u: goto label_17fd28;
        case 0x17fd2cu: goto label_17fd2c;
        case 0x17fd30u: goto label_17fd30;
        case 0x17fd34u: goto label_17fd34;
        case 0x17fd38u: goto label_17fd38;
        case 0x17fd3cu: goto label_17fd3c;
        case 0x17fd40u: goto label_17fd40;
        case 0x17fd44u: goto label_17fd44;
        case 0x17fd48u: goto label_17fd48;
        case 0x17fd4cu: goto label_17fd4c;
        case 0x17fd50u: goto label_17fd50;
        case 0x17fd54u: goto label_17fd54;
        case 0x17fd58u: goto label_17fd58;
        case 0x17fd5cu: goto label_17fd5c;
        case 0x17fd60u: goto label_17fd60;
        case 0x17fd64u: goto label_17fd64;
        case 0x17fd68u: goto label_17fd68;
        case 0x17fd6cu: goto label_17fd6c;
        case 0x17fd70u: goto label_17fd70;
        case 0x17fd74u: goto label_17fd74;
        default: break;
    }

    ctx->pc = 0x17fcb8u;

label_17fcb8:
    // 0x17fcb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17fcbc:
    // 0x17fcbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17fcc0:
    // 0x17fcc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17fcc4:
    // 0x17fcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17fcc8:
    // 0x17fcc8: 0xc06ddac  jal         func_1B76B0
label_17fccc:
    if (ctx->pc == 0x17FCCCu) {
        ctx->pc = 0x17FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCC8u;
        // 0x17fccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCD0u;
        goto label_17fcd0;
    }
    ctx->pc = 0x17FCC8u;
    SET_GPR_U32(ctx, 31, 0x17FCD0u);
    ctx->pc = 0x17FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCC8u;
    // 0x17fccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17FCC8u, 0x17FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCD0u;
label_17fcd0:
    // 0x17fcd0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_17fcd4:
    if (ctx->pc == 0x17FCD4u) {
        ctx->pc = 0x17FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD0u;
        // 0x17fcd4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCD8u;
        goto label_17fcd8;
    }
    ctx->pc = 0x17FCD0u;
    {
        const bool branch_taken_0x17fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD0u;
        // 0x17fcd4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd0) {
            ctx->pc = 0x17FD60u;
            goto label_17fd60;
        }
    }
    ctx->pc = 0x17FCD8u;
label_17fcd8:
    // 0x17fcd8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17fcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17fcdc:
    // 0x17fcdc: 0x2446dad0  addiu       $a2, $v0, -0x2530
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
label_17fce0:
    // 0x17fce0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17fce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17fce4:
    // 0x17fce4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17fce8:
    // 0x17fce8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17fcec:
    // 0x17fcec: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17fcf0:
    // 0x17fcf0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17fcf4:
    if (ctx->pc == 0x17FCF4u) {
        ctx->pc = 0x17FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCF0u;
        // 0x17fcf4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCF8u;
        goto label_17fcf8;
    }
    ctx->pc = 0x17FCF0u;
    {
        const bool branch_taken_0x17fcf0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCF0u;
        // 0x17fcf4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcf0) {
            ctx->pc = 0x17FD1Cu;
            goto label_17fd1c;
        }
    }
    ctx->pc = 0x17FCF8u;
label_17fcf8:
    // 0x17fcf8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17fcf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17fcfc:
    // 0x17fcfc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17fd00:
    // 0x17fd00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17fd04:
    // 0x17fd04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17fd08:
    // 0x17fd08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17fd0c:
    // 0x17fd0c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17fd0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17fd10:
    // 0x17fd10: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17fd10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17fd14:
    // 0x17fd14: 0x10000004  b           . + 4 + (0x4 << 2)
label_17fd18:
    if (ctx->pc == 0x17FD18u) {
        ctx->pc = 0x17FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD14u;
        // 0x17fd18: 0x2503dad0  addiu       $v1, $t0, -0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD1Cu;
        goto label_17fd1c;
    }
    ctx->pc = 0x17FD14u;
    {
        const bool branch_taken_0x17fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD14u;
        // 0x17fd18: 0x2503dad0  addiu       $v1, $t0, -0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd14) {
            ctx->pc = 0x17FD28u;
            goto label_17fd28;
        }
    }
    ctx->pc = 0x17FD1Cu;
label_17fd1c:
    // 0x17fd1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17fd20:
    // 0x17fd20: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17fd24:
    // 0x17fd24: 0x2503dad0  addiu       $v1, $t0, -0x2530
    ctx->pc = 0x17fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957776));
label_17fd28:
    // 0x17fd28: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17fd2c:
    // 0x17fd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17fd30:
    // 0x17fd30: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17fd34:
    if (ctx->pc == 0x17FD34u) {
        ctx->pc = 0x17FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD30u;
        // 0x17fd34: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD38u;
        goto label_17fd38;
    }
    ctx->pc = 0x17FD30u;
    {
        const bool branch_taken_0x17fd30 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD30u;
        // 0x17fd34: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd30) {
            ctx->pc = 0x17FD4Cu;
            goto label_17fd4c;
        }
    }
    ctx->pc = 0x17FD38u;
label_17fd38:
    // 0x17fd38: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17fd3c:
    // 0x17fd3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17fd40:
    // 0x17fd40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17fd44:
    // 0x17fd44: 0x10000002  b           . + 4 + (0x2 << 2)
label_17fd48:
    if (ctx->pc == 0x17FD48u) {
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD4Cu;
        goto label_17fd4c;
    }
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FD50u;
            goto label_17fd50;
        }
    }
    ctx->pc = 0x17FD4Cu;
label_17fd4c:
    // 0x17fd4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17fd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17fd50:
    // 0x17fd50: 0xc0f809  jalr        $a2
label_17fd54:
    if (ctx->pc == 0x17FD54u) {
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD58u;
        goto label_17fd58;
    }
    ctx->pc = 0x17FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17FD58u);
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD50u, 0x17FD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FD58u;
label_17fd58:
    // 0x17fd58: 0xc06ddb6  jal         func_1B76D8
label_17fd5c:
    if (ctx->pc == 0x17FD5Cu) {
        ctx->pc = 0x17FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD58u;
        // 0x17fd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD60u;
        goto label_17fd60;
    }
    ctx->pc = 0x17FD58u;
    SET_GPR_U32(ctx, 31, 0x17FD60u);
    ctx->pc = 0x17FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD58u;
    // 0x17fd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17FD58u, 0x17FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD60u;
label_17fd60:
    // 0x17fd60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17fd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fd64:
    // 0x17fd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17fd68:
    // 0x17fd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17fd6c:
    // 0x17fd6c: 0x3e00008  jr          $ra
label_17fd70:
    if (ctx->pc == 0x17FD70u) {
        ctx->pc = 0x17FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD6Cu;
        // 0x17fd70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD74u;
        goto label_17fd74;
    }
    ctx->pc = 0x17FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD6Cu;
        // 0x17fd70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD74u;
label_17fd74:
    // 0x17fd74: 0x0  nop
    ctx->pc = 0x17fd74u;
    // NOP
    ctx->pc = 0x17fd78u;
}
