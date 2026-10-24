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

// Function: func_0025FCF8
// Address: 0x25fcf8 - 0x25fe30
void func_0025FCF8_0x25fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025FCF8_0x25fcf8");
#endif

    switch (ctx->pc) {
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fcfcu: goto label_25fcfc;
        case 0x25fd00u: goto label_25fd00;
        case 0x25fd04u: goto label_25fd04;
        case 0x25fd08u: goto label_25fd08;
        case 0x25fd0cu: goto label_25fd0c;
        case 0x25fd10u: goto label_25fd10;
        case 0x25fd14u: goto label_25fd14;
        case 0x25fd18u: goto label_25fd18;
        case 0x25fd1cu: goto label_25fd1c;
        case 0x25fd20u: goto label_25fd20;
        case 0x25fd24u: goto label_25fd24;
        case 0x25fd28u: goto label_25fd28;
        case 0x25fd2cu: goto label_25fd2c;
        case 0x25fd30u: goto label_25fd30;
        case 0x25fd34u: goto label_25fd34;
        case 0x25fd38u: goto label_25fd38;
        case 0x25fd3cu: goto label_25fd3c;
        case 0x25fd40u: goto label_25fd40;
        case 0x25fd44u: goto label_25fd44;
        case 0x25fd48u: goto label_25fd48;
        case 0x25fd4cu: goto label_25fd4c;
        case 0x25fd50u: goto label_25fd50;
        case 0x25fd54u: goto label_25fd54;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd5cu: goto label_25fd5c;
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd64u: goto label_25fd64;
        case 0x25fd68u: goto label_25fd68;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd70u: goto label_25fd70;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd7cu: goto label_25fd7c;
        case 0x25fd80u: goto label_25fd80;
        case 0x25fd84u: goto label_25fd84;
        case 0x25fd88u: goto label_25fd88;
        case 0x25fd8cu: goto label_25fd8c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fd9cu: goto label_25fd9c;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fda4u: goto label_25fda4;
        case 0x25fda8u: goto label_25fda8;
        case 0x25fdacu: goto label_25fdac;
        case 0x25fdb0u: goto label_25fdb0;
        case 0x25fdb4u: goto label_25fdb4;
        case 0x25fdb8u: goto label_25fdb8;
        case 0x25fdbcu: goto label_25fdbc;
        case 0x25fdc0u: goto label_25fdc0;
        case 0x25fdc4u: goto label_25fdc4;
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fdccu: goto label_25fdcc;
        case 0x25fdd0u: goto label_25fdd0;
        case 0x25fdd4u: goto label_25fdd4;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fddcu: goto label_25fddc;
        case 0x25fde0u: goto label_25fde0;
        case 0x25fde4u: goto label_25fde4;
        case 0x25fde8u: goto label_25fde8;
        case 0x25fdecu: goto label_25fdec;
        case 0x25fdf0u: goto label_25fdf0;
        case 0x25fdf4u: goto label_25fdf4;
        case 0x25fdf8u: goto label_25fdf8;
        case 0x25fdfcu: goto label_25fdfc;
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe08u: goto label_25fe08;
        case 0x25fe0cu: goto label_25fe0c;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe14u: goto label_25fe14;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe1cu: goto label_25fe1c;
        case 0x25fe20u: goto label_25fe20;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe28u: goto label_25fe28;
        case 0x25fe2cu: goto label_25fe2c;
        default: break;
    }

    ctx->pc = 0x25fcf8u;

label_25fcf8:
    // 0x25fcf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25fcfc:
    // 0x25fcfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25fd00:
    // 0x25fd00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25fd04:
    // 0x25fd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25fd08:
    // 0x25fd08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25fd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fd0c:
    // 0x25fd0c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25fd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25fd10:
    // 0x25fd10: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_25fd14:
    // 0x25fd14: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_25fd18:
    // 0x25fd18: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x25fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_25fd1c:
    // 0x25fd1c: 0x40f809  jalr        $v0
label_25fd20:
    if (ctx->pc == 0x25FD20u) {
        ctx->pc = 0x25FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD1Cu;
        // 0x25fd20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD24u;
        goto label_25fd24;
    }
    ctx->pc = 0x25FD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25FD24u);
        ctx->pc = 0x25FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD1Cu;
        // 0x25fd20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD1Cu, 0x25FD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25FD24u;
label_25fd24:
    // 0x25fd24: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25fd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25fd28:
    // 0x25fd28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25fd2c:
    if (ctx->pc == 0x25FD2Cu) {
        ctx->pc = 0x25FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD28u;
        // 0x25fd2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD30u;
        goto label_25fd30;
    }
    ctx->pc = 0x25FD28u;
    {
        const bool branch_taken_0x25fd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD28u;
        // 0x25fd2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd28) {
            ctx->pc = 0x25FD44u;
            goto label_25fd44;
        }
    }
    ctx->pc = 0x25FD30u;
label_25fd30:
    // 0x25fd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fd34:
    // 0x25fd34: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_25fd38:
    if (ctx->pc == 0x25FD38u) {
        ctx->pc = 0x25FD3Cu;
        goto label_25fd3c;
    }
    ctx->pc = 0x25FD34u;
    {
        const bool branch_taken_0x25fd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25fd34) {
            ctx->pc = 0x25FDC8u;
            goto label_25fdc8;
        }
    }
    ctx->pc = 0x25FD3Cu;
label_25fd3c:
    // 0x25fd3c: 0x10000034  b           . + 4 + (0x34 << 2)
label_25fd40:
    if (ctx->pc == 0x25FD40u) {
        ctx->pc = 0x25FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD3Cu;
        // 0x25fd40: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD44u;
        goto label_25fd44;
    }
    ctx->pc = 0x25FD3Cu;
    {
        const bool branch_taken_0x25fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD3Cu;
        // 0x25fd40: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd3c) {
            ctx->pc = 0x25FE10u;
            goto label_25fe10;
        }
    }
    ctx->pc = 0x25FD44u;
label_25fd44:
    // 0x25fd44: 0xc09d91a  jal         func_276468
label_25fd48:
    if (ctx->pc == 0x25FD48u) {
        ctx->pc = 0x25FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD44u;
        // 0x25fd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD4Cu;
        goto label_25fd4c;
    }
    ctx->pc = 0x25FD44u;
    SET_GPR_U32(ctx, 31, 0x25FD4Cu);
    ctx->pc = 0x25FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD44u;
    // 0x25fd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25FD44u, 0x25FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD4Cu;
label_25fd4c:
    // 0x25fd4c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x25fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25fd50:
    // 0x25fd50: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25fd50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25fd54:
    // 0x25fd54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25fd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25fd58:
    // 0x25fd58: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25fd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25fd5c:
    // 0x25fd5c: 0x8c65108c  lw          $a1, 0x108C($v1)
    ctx->pc = 0x25fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_25fd60:
    // 0x25fd60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25fd60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fd64:
    // 0x25fd64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fd68:
    // 0x25fd68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25fd6c:
    // 0x25fd6c: 0xc0aa15e  jal         func_2A8578
label_25fd70:
    if (ctx->pc == 0x25FD70u) {
        ctx->pc = 0x25FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD6Cu;
        // 0x25fd70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD74u;
        goto label_25fd74;
    }
    ctx->pc = 0x25FD6Cu;
    SET_GPR_U32(ctx, 31, 0x25FD74u);
    ctx->pc = 0x25FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD6Cu;
    // 0x25fd70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25FD6Cu, 0x25FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD74u;
label_25fd74:
    // 0x25fd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fd78:
    // 0x25fd78: 0xc07f59a  jal         func_1FD668
label_25fd7c:
    if (ctx->pc == 0x25FD7Cu) {
        ctx->pc = 0x25FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD78u;
        // 0x25fd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD80u;
        goto label_25fd80;
    }
    ctx->pc = 0x25FD78u;
    SET_GPR_U32(ctx, 31, 0x25FD80u);
    ctx->pc = 0x25FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD78u;
    // 0x25fd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x25FD78u, 0x25FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD80u;
label_25fd80:
    // 0x25fd80: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_25fd84:
    // 0x25fd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fd88:
    // 0x25fd88: 0xc05657c  jal         func_1595F0
label_25fd8c:
    if (ctx->pc == 0x25FD8Cu) {
        ctx->pc = 0x25FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD88u;
        // 0x25fd8c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD90u;
        goto label_25fd90;
    }
    ctx->pc = 0x25FD88u;
    SET_GPR_U32(ctx, 31, 0x25FD90u);
    ctx->pc = 0x25FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD88u;
    // 0x25fd8c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25FD88u, 0x25FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD90u;
label_25fd90:
    // 0x25fd90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_25fd94:
    // 0x25fd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fd98:
    // 0x25fd98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_25fd9c:
    // 0x25fd9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fda0:
    // 0x25fda0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25fda0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_25fda4:
    // 0x25fda4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25fda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fda8:
    // 0x25fda8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25fda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fdac:
    // 0x25fdac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25fdacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fdb0:
    // 0x25fdb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25fdb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fdb4:
    // 0x25fdb4: 0xc0b2e92  jal         func_2CBA48
label_25fdb8:
    if (ctx->pc == 0x25FDB8u) {
        ctx->pc = 0x25FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDB4u;
        // 0x25fdb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FDBCu;
        goto label_25fdbc;
    }
    ctx->pc = 0x25FDB4u;
    SET_GPR_U32(ctx, 31, 0x25FDBCu);
    ctx->pc = 0x25FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDB4u;
    // 0x25fdb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25FDB4u, 0x25FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDBCu;
label_25fdbc:
    // 0x25fdbc: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25fdbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25fdc0:
    // 0x25fdc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25fdc4:
    // 0x25fdc4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x25fdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_25fdc8:
    // 0x25fdc8: 0xc055f06  jal         func_157C18
label_25fdcc:
    if (ctx->pc == 0x25FDCCu) {
        ctx->pc = 0x25FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDC8u;
        // 0x25fdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FDD0u;
        goto label_25fdd0;
    }
    ctx->pc = 0x25FDC8u;
    SET_GPR_U32(ctx, 31, 0x25FDD0u);
    ctx->pc = 0x25FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDC8u;
    // 0x25fdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25FDC8u, 0x25FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDD0u;
label_25fdd0:
    // 0x25fdd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25fdd4:
    if (ctx->pc == 0x25FDD4u) {
        ctx->pc = 0x25FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDD0u;
        // 0x25fdd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FDD8u;
        goto label_25fdd8;
    }
    ctx->pc = 0x25FDD0u;
    {
        const bool branch_taken_0x25fdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDD0u;
        // 0x25fdd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdd0) {
            ctx->pc = 0x25FDECu;
            goto label_25fdec;
        }
    }
    ctx->pc = 0x25FDD8u;
label_25fdd8:
    // 0x25fdd8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x25fdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_25fddc:
    // 0x25fddc: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25fddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_25fde0:
    // 0x25fde0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25fde0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_25fde4:
    // 0x25fde4: 0x10000009  b           . + 4 + (0x9 << 2)
label_25fde8:
    if (ctx->pc == 0x25FDE8u) {
        ctx->pc = 0x25FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDE4u;
        // 0x25fde8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FDECu;
        goto label_25fdec;
    }
    ctx->pc = 0x25FDE4u;
    {
        const bool branch_taken_0x25fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDE4u;
        // 0x25fde8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fde4) {
            ctx->pc = 0x25FE0Cu;
            goto label_25fe0c;
        }
    }
    ctx->pc = 0x25FDECu;
label_25fdec:
    // 0x25fdec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25fdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25fdf0:
    // 0x25fdf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25fdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25fdf4:
    // 0x25fdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fdf8:
    // 0x25fdf8: 0xc053e7c  jal         func_14F9F0
label_25fdfc:
    if (ctx->pc == 0x25FDFCu) {
        ctx->pc = 0x25FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDF8u;
        // 0x25fdfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FE00u;
        goto label_25fe00;
    }
    ctx->pc = 0x25FDF8u;
    SET_GPR_U32(ctx, 31, 0x25FE00u);
    ctx->pc = 0x25FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDF8u;
    // 0x25fdfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25FDF8u, 0x25FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE00u;
label_25fe00:
    // 0x25fe00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25fe00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25fe04:
    // 0x25fe04: 0xc053e4a  jal         func_14F928
label_25fe08:
    if (ctx->pc == 0x25FE08u) {
        ctx->pc = 0x25FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE04u;
        // 0x25fe08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FE0Cu;
        goto label_25fe0c;
    }
    ctx->pc = 0x25FE04u;
    SET_GPR_U32(ctx, 31, 0x25FE0Cu);
    ctx->pc = 0x25FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE04u;
    // 0x25fe08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25FE04u, 0x25FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE0Cu;
label_25fe0c:
    // 0x25fe0c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25fe0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_25fe10:
    // 0x25fe10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25fe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25fe14:
    // 0x25fe14: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x25fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_25fe18:
    // 0x25fe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe1c:
    // 0x25fe1c: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x25fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_25fe20:
    // 0x25fe20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fe20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25fe24:
    // 0x25fe24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25fe28:
    // 0x25fe28: 0x3e00008  jr          $ra
label_25fe2c:
    if (ctx->pc == 0x25FE2Cu) {
        ctx->pc = 0x25FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE28u;
        // 0x25fe2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FE30u;
        goto label_fallthrough_0x25fe28;
    }
    ctx->pc = 0x25FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE28u;
        // 0x25fe2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25fe28:
    ctx->pc = 0x25FE30u;
}
