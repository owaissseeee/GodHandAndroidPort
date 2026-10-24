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

// Function: func_001B6968
// Address: 0x1b6968 - 0x1b6a30
void func_001B6968_0x1b6968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6968_0x1b6968");
#endif

    switch (ctx->pc) {
        case 0x1b6968u: goto label_1b6968;
        case 0x1b696cu: goto label_1b696c;
        case 0x1b6970u: goto label_1b6970;
        case 0x1b6974u: goto label_1b6974;
        case 0x1b6978u: goto label_1b6978;
        case 0x1b697cu: goto label_1b697c;
        case 0x1b6980u: goto label_1b6980;
        case 0x1b6984u: goto label_1b6984;
        case 0x1b6988u: goto label_1b6988;
        case 0x1b698cu: goto label_1b698c;
        case 0x1b6990u: goto label_1b6990;
        case 0x1b6994u: goto label_1b6994;
        case 0x1b6998u: goto label_1b6998;
        case 0x1b699cu: goto label_1b699c;
        case 0x1b69a0u: goto label_1b69a0;
        case 0x1b69a4u: goto label_1b69a4;
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69acu: goto label_1b69ac;
        case 0x1b69b0u: goto label_1b69b0;
        case 0x1b69b4u: goto label_1b69b4;
        case 0x1b69b8u: goto label_1b69b8;
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69c0u: goto label_1b69c0;
        case 0x1b69c4u: goto label_1b69c4;
        case 0x1b69c8u: goto label_1b69c8;
        case 0x1b69ccu: goto label_1b69cc;
        case 0x1b69d0u: goto label_1b69d0;
        case 0x1b69d4u: goto label_1b69d4;
        case 0x1b69d8u: goto label_1b69d8;
        case 0x1b69dcu: goto label_1b69dc;
        case 0x1b69e0u: goto label_1b69e0;
        case 0x1b69e4u: goto label_1b69e4;
        case 0x1b69e8u: goto label_1b69e8;
        case 0x1b69ecu: goto label_1b69ec;
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b69f8u: goto label_1b69f8;
        case 0x1b69fcu: goto label_1b69fc;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a04u: goto label_1b6a04;
        case 0x1b6a08u: goto label_1b6a08;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a10u: goto label_1b6a10;
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a18u: goto label_1b6a18;
        case 0x1b6a1cu: goto label_1b6a1c;
        case 0x1b6a20u: goto label_1b6a20;
        case 0x1b6a24u: goto label_1b6a24;
        case 0x1b6a28u: goto label_1b6a28;
        case 0x1b6a2cu: goto label_1b6a2c;
        default: break;
    }

    ctx->pc = 0x1b6968u;

label_1b6968:
    // 0x1b6968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b696c:
    // 0x1b696c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b6970:
    // 0x1b6970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b6974:
    // 0x1b6974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b6978:
    // 0x1b6978: 0xc06ddac  jal         func_1B76B0
label_1b697c:
    if (ctx->pc == 0x1B697Cu) {
        ctx->pc = 0x1B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6978u;
        // 0x1b697c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6980u;
        goto label_1b6980;
    }
    ctx->pc = 0x1B6978u;
    SET_GPR_U32(ctx, 31, 0x1B6980u);
    ctx->pc = 0x1B697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6978u;
    // 0x1b697c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B6978u, 0x1B6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6980u;
label_1b6980:
    // 0x1b6980: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1b6984:
    if (ctx->pc == 0x1B6984u) {
        ctx->pc = 0x1B6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6980u;
        // 0x1b6984: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6988u;
        goto label_1b6988;
    }
    ctx->pc = 0x1B6980u;
    {
        const bool branch_taken_0x1b6980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6980u;
        // 0x1b6984: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6980) {
            ctx->pc = 0x1B6A1Cu;
            goto label_1b6a1c;
        }
    }
    ctx->pc = 0x1B6988u;
label_1b6988:
    // 0x1b6988: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b6988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b698c:
    // 0x1b698c: 0x2446dd78  addiu       $a2, $v0, -0x2288
    ctx->pc = 0x1b698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958456));
label_1b6990:
    // 0x1b6990: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6994:
    // 0x1b6994: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b6994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b6998:
    // 0x1b6998: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b6998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b699c:
    // 0x1b699c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b699cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b69a0:
    // 0x1b69a0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b69a4:
    if (ctx->pc == 0x1B69A4u) {
        ctx->pc = 0x1B69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69A0u;
        // 0x1b69a4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69A8u;
        goto label_1b69a8;
    }
    ctx->pc = 0x1B69A0u;
    {
        const bool branch_taken_0x1b69a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69A0u;
        // 0x1b69a4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69a0) {
            ctx->pc = 0x1B69CCu;
            goto label_1b69cc;
        }
    }
    ctx->pc = 0x1B69A8u;
label_1b69a8:
    // 0x1b69a8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b69a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b69ac:
    // 0x1b69ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b69acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b69b0:
    // 0x1b69b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b69b4:
    // 0x1b69b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b69b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b69b8:
    // 0x1b69b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b69bc:
    // 0x1b69bc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b69bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b69c0:
    // 0x1b69c0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b69c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b69c4:
    // 0x1b69c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b69c8:
    if (ctx->pc == 0x1B69C8u) {
        ctx->pc = 0x1B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69C4u;
        // 0x1b69c8: 0x2503dd78  addiu       $v1, $t0, -0x2288 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69CCu;
        goto label_1b69cc;
    }
    ctx->pc = 0x1B69C4u;
    {
        const bool branch_taken_0x1b69c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69C4u;
        // 0x1b69c8: 0x2503dd78  addiu       $v1, $t0, -0x2288 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69c4) {
            ctx->pc = 0x1B69D8u;
            goto label_1b69d8;
        }
    }
    ctx->pc = 0x1B69CCu;
label_1b69cc:
    // 0x1b69cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b69d0:
    // 0x1b69d0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b69d4:
    // 0x1b69d4: 0x2503dd78  addiu       $v1, $t0, -0x2288
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958456));
label_1b69d8:
    // 0x1b69d8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b69dc:
    // 0x1b69dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b69e0:
    // 0x1b69e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b69e4:
    if (ctx->pc == 0x1B69E4u) {
        ctx->pc = 0x1B69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69E0u;
        // 0x1b69e4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69E8u;
        goto label_1b69e8;
    }
    ctx->pc = 0x1B69E0u;
    {
        const bool branch_taken_0x1b69e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69E0u;
        // 0x1b69e4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69e0) {
            ctx->pc = 0x1B69FCu;
            goto label_1b69fc;
        }
    }
    ctx->pc = 0x1B69E8u;
label_1b69e8:
    // 0x1b69e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b69e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b69ec:
    // 0x1b69ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b69f0:
    // 0x1b69f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b69f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b69f4:
    // 0x1b69f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b69f8:
    if (ctx->pc == 0x1B69F8u) {
        ctx->pc = 0x1B69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69F4u;
        // 0x1b69f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69FCu;
        goto label_1b69fc;
    }
    ctx->pc = 0x1B69F4u;
    {
        const bool branch_taken_0x1b69f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69F4u;
        // 0x1b69f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69f4) {
            ctx->pc = 0x1B6A00u;
            goto label_1b6a00;
        }
    }
    ctx->pc = 0x1B69FCu;
label_1b69fc:
    // 0x1b69fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a00:
    // 0x1b6a00: 0xc0f809  jalr        $a2
label_1b6a04:
    if (ctx->pc == 0x1B6A04u) {
        ctx->pc = 0x1B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A00u;
        // 0x1b6a04: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A08u;
        goto label_1b6a08;
    }
    ctx->pc = 0x1B6A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B6A08u);
        ctx->pc = 0x1B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A00u;
        // 0x1b6a04: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A00u, 0x1B6A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6A08u;
label_1b6a08:
    // 0x1b6a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a0c:
    // 0x1b6a0c: 0xc0aa1fa  jal         func_2A87E8
label_1b6a10:
    if (ctx->pc == 0x1B6A10u) {
        ctx->pc = 0x1B6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A0Cu;
        // 0x1b6a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A14u;
        goto label_1b6a14;
    }
    ctx->pc = 0x1B6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A14u);
    ctx->pc = 0x1B6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A0Cu;
    // 0x1b6a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B6A0Cu, 0x1B6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A14u;
label_1b6a14:
    // 0x1b6a14: 0xc06ddb6  jal         func_1B76D8
label_1b6a18:
    if (ctx->pc == 0x1B6A18u) {
        ctx->pc = 0x1B6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A14u;
        // 0x1b6a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A1Cu;
        goto label_1b6a1c;
    }
    ctx->pc = 0x1B6A14u;
    SET_GPR_U32(ctx, 31, 0x1B6A1Cu);
    ctx->pc = 0x1B6A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A14u;
    // 0x1b6a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B6A14u, 0x1B6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A1Cu;
label_1b6a1c:
    // 0x1b6a1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b6a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6a20:
    // 0x1b6a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6a24:
    // 0x1b6a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6a28:
    // 0x1b6a28: 0x3e00008  jr          $ra
label_1b6a2c:
    if (ctx->pc == 0x1B6A2Cu) {
        ctx->pc = 0x1B6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A28u;
        // 0x1b6a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A30u;
        goto label_fallthrough_0x1b6a28;
    }
    ctx->pc = 0x1B6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A28u;
        // 0x1b6a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6a28:
    ctx->pc = 0x1B6A30u;
}
