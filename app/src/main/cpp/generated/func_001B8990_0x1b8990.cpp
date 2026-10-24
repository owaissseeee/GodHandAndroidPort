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

// Function: func_001B8990
// Address: 0x1b8990 - 0x1b8a50
void func_001B8990_0x1b8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8990_0x1b8990");
#endif

    switch (ctx->pc) {
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        default: break;
    }

    ctx->pc = 0x1b8990u;

label_1b8990:
    // 0x1b8990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b8994:
    // 0x1b8994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b8998:
    // 0x1b8998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b899c:
    // 0x1b899c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b899cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b89a0:
    // 0x1b89a0: 0xc06ddac  jal         func_1B76B0
label_1b89a4:
    if (ctx->pc == 0x1B89A4u) {
        ctx->pc = 0x1B89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A0u;
        // 0x1b89a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89A8u;
        goto label_1b89a8;
    }
    ctx->pc = 0x1B89A0u;
    SET_GPR_U32(ctx, 31, 0x1B89A8u);
    ctx->pc = 0x1B89A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89A0u;
    // 0x1b89a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B89A0u, 0x1B89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89A8u;
label_1b89a8:
    // 0x1b89a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1b89ac:
    if (ctx->pc == 0x1B89ACu) {
        ctx->pc = 0x1B89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A8u;
        // 0x1b89ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89B0u;
        goto label_1b89b0;
    }
    ctx->pc = 0x1B89A8u;
    {
        const bool branch_taken_0x1b89a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A8u;
        // 0x1b89ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89a8) {
            ctx->pc = 0x1B8A38u;
            goto label_1b8a38;
        }
    }
    ctx->pc = 0x1B89B0u;
label_1b89b0:
    // 0x1b89b0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b89b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b89b4:
    // 0x1b89b4: 0x2446dd98  addiu       $a2, $v0, -0x2268
    ctx->pc = 0x1b89b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958488));
label_1b89b8:
    // 0x1b89b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b89b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b89bc:
    // 0x1b89bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b89c0:
    // 0x1b89c0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b89c4:
    // 0x1b89c4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b89c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b89c8:
    // 0x1b89c8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b89cc:
    if (ctx->pc == 0x1B89CCu) {
        ctx->pc = 0x1B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89C8u;
        // 0x1b89cc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89D0u;
        goto label_1b89d0;
    }
    ctx->pc = 0x1B89C8u;
    {
        const bool branch_taken_0x1b89c8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89C8u;
        // 0x1b89cc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89c8) {
            ctx->pc = 0x1B89F4u;
            goto label_1b89f4;
        }
    }
    ctx->pc = 0x1B89D0u;
label_1b89d0:
    // 0x1b89d0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b89d4:
    // 0x1b89d4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b89d8:
    // 0x1b89d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b89dc:
    // 0x1b89dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b89e0:
    // 0x1b89e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b89e4:
    // 0x1b89e4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b89e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b89e8:
    // 0x1b89e8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b89e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b89ec:
    // 0x1b89ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b89f0:
    if (ctx->pc == 0x1B89F0u) {
        ctx->pc = 0x1B89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89ECu;
        // 0x1b89f0: 0x2503dd98  addiu       $v1, $t0, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89F4u;
        goto label_1b89f4;
    }
    ctx->pc = 0x1B89ECu;
    {
        const bool branch_taken_0x1b89ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89ECu;
        // 0x1b89f0: 0x2503dd98  addiu       $v1, $t0, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89ec) {
            ctx->pc = 0x1B8A00u;
            goto label_1b8a00;
        }
    }
    ctx->pc = 0x1B89F4u;
label_1b89f4:
    // 0x1b89f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b89f8:
    // 0x1b89f8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b89f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b89fc:
    // 0x1b89fc: 0x2503dd98  addiu       $v1, $t0, -0x2268
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958488));
label_1b8a00:
    // 0x1b8a00: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b8a04:
    // 0x1b8a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8a08:
    // 0x1b8a08: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b8a0c:
    if (ctx->pc == 0x1B8A0Cu) {
        ctx->pc = 0x1B8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A08u;
        // 0x1b8a0c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A10u;
        goto label_1b8a10;
    }
    ctx->pc = 0x1B8A08u;
    {
        const bool branch_taken_0x1b8a08 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A08u;
        // 0x1b8a0c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a08) {
            ctx->pc = 0x1B8A24u;
            goto label_1b8a24;
        }
    }
    ctx->pc = 0x1B8A10u;
label_1b8a10:
    // 0x1b8a10: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b8a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b8a14:
    // 0x1b8a14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b8a18:
    // 0x1b8a18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b8a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b8a1c:
    // 0x1b8a1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b8a20:
    if (ctx->pc == 0x1B8A20u) {
        ctx->pc = 0x1B8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A1Cu;
        // 0x1b8a20: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A24u;
        goto label_1b8a24;
    }
    ctx->pc = 0x1B8A1Cu;
    {
        const bool branch_taken_0x1b8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A1Cu;
        // 0x1b8a20: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a1c) {
            ctx->pc = 0x1B8A28u;
            goto label_1b8a28;
        }
    }
    ctx->pc = 0x1B8A24u;
label_1b8a24:
    // 0x1b8a24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b8a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a28:
    // 0x1b8a28: 0xc0f809  jalr        $a2
label_1b8a2c:
    if (ctx->pc == 0x1B8A2Cu) {
        ctx->pc = 0x1B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A28u;
        // 0x1b8a2c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A30u;
        goto label_1b8a30;
    }
    ctx->pc = 0x1B8A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B8A30u);
        ctx->pc = 0x1B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A28u;
        // 0x1b8a2c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A28u, 0x1B8A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8A30u;
label_1b8a30:
    // 0x1b8a30: 0xc06ddb6  jal         func_1B76D8
label_1b8a34:
    if (ctx->pc == 0x1B8A34u) {
        ctx->pc = 0x1B8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A30u;
        // 0x1b8a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A38u;
        goto label_1b8a38;
    }
    ctx->pc = 0x1B8A30u;
    SET_GPR_U32(ctx, 31, 0x1B8A38u);
    ctx->pc = 0x1B8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A30u;
    // 0x1b8a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B8A30u, 0x1B8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A38u;
label_1b8a38:
    // 0x1b8a38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8a3c:
    // 0x1b8a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8a40:
    // 0x1b8a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8a44:
    // 0x1b8a44: 0x3e00008  jr          $ra
label_1b8a48:
    if (ctx->pc == 0x1B8A48u) {
        ctx->pc = 0x1B8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A44u;
        // 0x1b8a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A4Cu;
        goto label_1b8a4c;
    }
    ctx->pc = 0x1B8A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A44u;
        // 0x1b8a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8A4Cu;
label_1b8a4c:
    // 0x1b8a4c: 0x0  nop
    ctx->pc = 0x1b8a4cu;
    // NOP
    ctx->pc = 0x1b8a50u;
}
