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

// Function: Slot2_Execute
// Address: 0x1e4970 - 0x1e4d48
void Slot2_Execute_0x1e4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_Execute_0x1e4970");
#endif

    switch (ctx->pc) {
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d18u: goto label_1e4d18;
        default: break;
    }

    ctx->pc = 0x1e4970u;

    // 0x1e4970: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4974: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e4974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e4978: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e497c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4984: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e4984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e4988: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x1e4988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1e498c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e498cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4990: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e4994: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e4994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e4998: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1e4998u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1e499c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e49a0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1e49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1e49a4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1e49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1e49a8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1e49a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49ac: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1e49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1e49b0: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x1e49b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x1e49b4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e49b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e49bc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x1E49BCu;
    SET_GPR_U32(ctx, 31, 0x1E49C4u);
    ctx->pc = 0x1E49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49BCu;
    // 0x1e49c0: 0x3c1e0057  lui         $fp, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1E49BCu, 0x1E49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49C4u;
label_1e49c4:
    // 0x1e49c4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1e49c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1e49c8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1e49cc: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x1e49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1e49d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e49d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e49d4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1e49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1e49d8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1e49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1e49dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e49dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e49e0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1e49e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e49e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e49e8: 0x24b07470  addiu       $s0, $a1, 0x7470
    ctx->pc = 0x1e49e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 29808));
    // 0x1e49ec: 0xacc37a78  sw          $v1, 0x7A78($a2)
    ctx->pc = 0x1e49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 3));
    // 0x1e49f0: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x1E49F0u;
    SET_GPR_U32(ctx, 31, 0x1E49F8u);
    ctx->pc = 0x1E49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49F0u;
    // 0x1e49f4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x1E49F0u, 0x1E49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49F8u;
label_1e49f8:
    // 0x1e49f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e49fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a00: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e4a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a0c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1e4a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1e4a10: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E4A10u;
    SET_GPR_U32(ctx, 31, 0x1E4A18u);
    ctx->pc = 0x1E4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A10u;
    // 0x1e4a14: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E4A10u, 0x1E4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A18u;
label_1e4a18:
    // 0x1e4a18: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1e4a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e4a1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4A1Cu;
    {
        const bool branch_taken_0x1e4a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A1Cu;
        // 0x1e4a20: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a1c) {
            ctx->pc = 0x1E4A38u;
            goto label_1e4a38;
        }
    }
    ctx->pc = 0x1E4A24u;
    // 0x1e4a24: 0x0  nop
    ctx->pc = 0x1e4a24u;
    // NOP
label_1e4a28:
    // 0x1e4a28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4a2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A34u);
    ctx->pc = 0x1E4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A2Cu;
    // 0x1e4a30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E4A2Cu, 0x1E4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A34u;
label_1e4a34:
    // 0x1e4a34: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1e4a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1e4a38:
    // 0x1e4a38: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e4a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4a40: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E4A40u;
    {
        const bool branch_taken_0x1e4a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A40u;
        // 0x1e4a44: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a40) {
            ctx->pc = 0x1E4A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a28;
        }
    }
    ctx->pc = 0x1E4A48u;
    // 0x1e4a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a4c: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1e4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1e4a50: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1e4a54: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E4A54u;
    SET_GPR_U32(ctx, 31, 0x1E4A5Cu);
    ctx->pc = 0x1E4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A54u;
    // 0x1e4a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E4A54u, 0x1E4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A5Cu;
label_1e4a5c:
    // 0x1e4a5c: 0x26300400  addiu       $s0, $s1, 0x400
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e4a60: 0x26e374a0  addiu       $v1, $s7, 0x74A0
    ctx->pc = 0x1e4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
    // 0x1e4a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4a68: 0xa0620569  sb          $v0, 0x569($v1)
    ctx->pc = 0x1e4a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e4a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a70: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1e4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1e4a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a78: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e4a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1e4a84: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e4a88: 0xc079adc  jal         func_1E6B70
    ctx->pc = 0x1E4A88u;
    SET_GPR_U32(ctx, 31, 0x1E4A90u);
    ctx->pc = 0x1E4A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A88u;
    // 0x1e4a8c: 0xa62003d2  sh          $zero, 0x3D2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 978), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6B70u, 0x1E4A88u, 0x1E4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A90u;
label_1e4a90:
    // 0x1e4a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a98: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E4A98u;
    SET_GPR_U32(ctx, 31, 0x1E4AA0u);
    ctx->pc = 0x1E4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A98u;
    // 0x1e4a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E4A98u, 0x1E4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AA0u;
label_1e4aa0:
    // 0x1e4aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4aa8: 0xc079b52  jal         func_1E6D48
    ctx->pc = 0x1E4AA8u;
    SET_GPR_U32(ctx, 31, 0x1E4AB0u);
    ctx->pc = 0x1E4AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AA8u;
    // 0x1e4aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D48u, 0x1E4AA8u, 0x1E4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AB0u;
label_1e4ab0:
    // 0x1e4ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ab8: 0xc079b84  jal         func_1E6E10
    ctx->pc = 0x1E4AB8u;
    SET_GPR_U32(ctx, 31, 0x1E4AC0u);
    ctx->pc = 0x1E4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AB8u;
    // 0x1e4abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E10u, 0x1E4AB8u, 0x1E4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AC0u;
label_1e4ac0:
    // 0x1e4ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ac4: 0xc079c6e  jal         func_1E71B8
    ctx->pc = 0x1E4AC4u;
    SET_GPR_U32(ctx, 31, 0x1E4ACCu);
    ctx->pc = 0x1E4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AC4u;
    // 0x1e4ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E71B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E71B8u, 0x1E4AC4u, 0x1E4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4ACCu;
label_1e4acc:
    // 0x1e4acc: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1E4ACCu;
    SET_GPR_U32(ctx, 31, 0x1E4AD4u);
    ctx->pc = 0x1E4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4ACCu;
    // 0x1e4ad0: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E4ACCu, 0x1E4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AD4u;
label_1e4ad4:
    // 0x1e4ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ad8: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1E4AD8u;
    SET_GPR_U32(ctx, 31, 0x1E4AE0u);
    ctx->pc = 0x1E4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AD8u;
    // 0x1e4adc: 0x26240450  addiu       $a0, $s1, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E4AD8u, 0x1E4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AE0u;
label_1e4ae0:
    // 0x1e4ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ae4: 0xc0799ea  jal         func_1E67A8
    ctx->pc = 0x1E4AE4u;
    SET_GPR_U32(ctx, 31, 0x1E4AECu);
    ctx->pc = 0x1E4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE4u;
    // 0x1e4ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67A8u, 0x1E4AE4u, 0x1E4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AECu;
label_1e4aec:
    // 0x1e4aec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1e4af0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4af8: 0x3c0142e3  lui         $at, 0x42E3
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17123 << 16));
    // 0x1e4afc: 0x34212e14  ori         $at, $at, 0x2E14
    ctx->pc = 0x1e4afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11796);
    // 0x1e4b00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e4b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4b04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4b0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e4b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e4b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b14: 0x3c0143fc  lui         $at, 0x43FC
    ctx->pc = 0x1e4b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17404 << 16));
    // 0x1e4b18: 0x3421dcc6  ori         $at, $at, 0xDCC6
    ctx->pc = 0x1e4b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56518);
    // 0x1e4b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4b20: 0x3c0142bc  lui         $at, 0x42BC
    ctx->pc = 0x1e4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17084 << 16));
    // 0x1e4b24: 0x342102de  ori         $at, $at, 0x2DE
    ctx->pc = 0x1e4b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)734);
    // 0x1e4b28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e4b2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e4b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e4b30: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e4b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e4b34: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e4b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4b38: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4b38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4b3c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e4b3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e4b40: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x1e4b40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e4b44: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1e4b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e4b48: 0xc079a1c  jal         func_1E6870
    ctx->pc = 0x1E4B48u;
    SET_GPR_U32(ctx, 31, 0x1E4B50u);
    ctx->pc = 0x1E4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B48u;
    // 0x1e4b4c: 0xe644000c  swc1        $f4, 0xC($s2) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6870u, 0x1E4B48u, 0x1E4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B50u;
label_1e4b50:
    // 0x1e4b50: 0x26a47470  addiu       $a0, $s5, 0x7470
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    // 0x1e4b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b58: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e4b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b60: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1e4b64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b68: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E4B68u;
    SET_GPR_U32(ctx, 31, 0x1E4B70u);
    ctx->pc = 0x1E4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B68u;
    // 0x1e4b6c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E4B68u, 0x1E4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4B70u;
    {
        const bool branch_taken_0x1e4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B70u;
        // 0x1e4b74: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b70) {
            ctx->pc = 0x1E4B98u;
            goto label_1e4b98;
        }
    }
    ctx->pc = 0x1E4B78u;
label_1e4b78:
    // 0x1e4b78: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E4B78u;
    SET_GPR_U32(ctx, 31, 0x1E4B80u);
    ctx->pc = 0x1E4B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B78u;
    // 0x1e4b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E4B78u, 0x1E4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B80u;
label_1e4b80:
    // 0x1e4b80: 0xc079d10  jal         func_1E7440
    ctx->pc = 0x1E4B80u;
    SET_GPR_U32(ctx, 31, 0x1E4B88u);
    ctx->pc = 0x1E4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B80u;
    // 0x1e4b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E4B80u, 0x1E4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B88u;
label_1e4b88:
    // 0x1e4b88: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e4b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4b90: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E4B90u;
    SET_GPR_U32(ctx, 31, 0x1E4B98u);
    ctx->pc = 0x1E4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B90u;
    // 0x1e4b94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E4B90u, 0x1E4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B98u;
label_1e4b98:
    // 0x1e4b98: 0x26a47470  addiu       $a0, $s5, 0x7470
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    // 0x1e4b9c: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1e4b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e4ba0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e4ba4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4ba8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E4BA8u;
    {
        const bool branch_taken_0x1e4ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ba8) {
            ctx->pc = 0x1E4B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4b78;
        }
    }
    ctx->pc = 0x1E4BB0u;
    // 0x1e4bb0: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1E4BB0u;
    SET_GPR_U32(ctx, 31, 0x1E4BB8u);
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1E4BB0u, 0x1E4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BB8u;
label_1e4bb8:
    // 0x1e4bb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4BB8u;
    {
        const bool branch_taken_0x1e4bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BB8u;
        // 0x1e4bbc: 0x9e220054  lwu         $v0, 0x54($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bb8) {
            ctx->pc = 0x1E4BDCu;
            goto label_1e4bdc;
        }
    }
    ctx->pc = 0x1E4BC0u;
label_1e4bc0:
    // 0x1e4bc0: 0xc079352  jal         func_1E4D48
    ctx->pc = 0x1E4BC0u;
    SET_GPR_U32(ctx, 31, 0x1E4BC8u);
    ctx->pc = 0x1E4BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BC0u;
    // 0x1e4bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4D48u, 0x1E4BC0u, 0x1E4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BC8u;
label_1e4bc8:
    // 0x1e4bc8: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e4bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4bd0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E4BD0u;
    SET_GPR_U32(ctx, 31, 0x1E4BD8u);
    ctx->pc = 0x1E4BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BD0u;
    // 0x1e4bd4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E4BD0u, 0x1E4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BD8u;
label_1e4bd8:
    // 0x1e4bd8: 0x9e220054  lwu         $v0, 0x54($s1)
    ctx->pc = 0x1e4bd8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1e4bdc:
    // 0x1e4bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4be0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E4BE0u;
    {
        const bool branch_taken_0x1e4be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BE0u;
        // 0x1e4be4: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4be0) {
            ctx->pc = 0x1E4BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4bc0;
        }
    }
    ctx->pc = 0x1E4BE8u;
    // 0x1e4be8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1e4bec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e4becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4bf0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e4bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e4bf4: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1e4bf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e4bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e4bfc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e4bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e4c00: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1E4C00u;
    SET_GPR_U32(ctx, 31, 0x1E4C08u);
    ctx->pc = 0x1E4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C00u;
    // 0x1e4c04: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1E4C00u, 0x1E4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C08u;
label_1e4c08:
    // 0x1e4c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c10: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e4c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c1c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1e4c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1e4c20: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E4C20u;
    SET_GPR_U32(ctx, 31, 0x1E4C28u);
    ctx->pc = 0x1E4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C20u;
    // 0x1e4c24: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E4C20u, 0x1E4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C28u;
label_1e4c28:
    // 0x1e4c28: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1e4c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e4c2c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e4c30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4c34: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E4C34u;
    {
        const bool branch_taken_0x1e4c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C34u;
        // 0x1e4c38: 0x26e374a0  addiu       $v1, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c34) {
            ctx->pc = 0x1E4C7Cu;
            goto label_1e4c7c;
        }
    }
    ctx->pc = 0x1E4C3Cu;
    // 0x1e4c3c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1e4c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c40: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1e4c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c44: 0x0  nop
    ctx->pc = 0x1e4c44u;
    // NOP
label_1e4c48:
    // 0x1e4c48: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E4C48u;
    SET_GPR_U32(ctx, 31, 0x1E4C50u);
    ctx->pc = 0x1E4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C48u;
    // 0x1e4c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E4C48u, 0x1E4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C50u;
label_1e4c50:
    // 0x1e4c50: 0xc079d10  jal         func_1E7440
    ctx->pc = 0x1E4C50u;
    SET_GPR_U32(ctx, 31, 0x1E4C58u);
    ctx->pc = 0x1E4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C50u;
    // 0x1e4c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E4C50u, 0x1E4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C58u;
label_1e4c58:
    // 0x1e4c58: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e4c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4c60: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E4C60u;
    SET_GPR_U32(ctx, 31, 0x1E4C68u);
    ctx->pc = 0x1E4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C60u;
    // 0x1e4c64: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E4C60u, 0x1E4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C68u;
label_1e4c68:
    // 0x1e4c68: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x1e4c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1e4c6c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e4c70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4c74: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E4C74u;
    {
        const bool branch_taken_0x1e4c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C74u;
        // 0x1e4c78: 0x26e374a0  addiu       $v1, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c74) {
            ctx->pc = 0x1E4C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4c48;
        }
    }
    ctx->pc = 0x1E4C7Cu;
label_1e4c7c:
    // 0x1e4c7c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1e4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1e4c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e4c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4c88: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1e4c8c: 0xa0620569  sb          $v0, 0x569($v1)
    ctx->pc = 0x1e4c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e4c90: 0xc0b453e  jal         func_2D14F8
    ctx->pc = 0x1E4C90u;
    SET_GPR_U32(ctx, 31, 0x1E4C98u);
    ctx->pc = 0x1E4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C90u;
    // 0x1e4c94: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14F8u, 0x1E4C90u, 0x1E4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C98u;
label_1e4c98:
    // 0x1e4c98: 0xc079cda  jal         func_1E7368
    ctx->pc = 0x1E4C98u;
    SET_GPR_U32(ctx, 31, 0x1E4CA0u);
    ctx->pc = 0x1E4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C98u;
    // 0x1e4c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7368u, 0x1E4C98u, 0x1E4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CA0u;
label_1e4ca0:
    // 0x1e4ca0: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1E4CA0u;
    SET_GPR_U32(ctx, 31, 0x1E4CA8u);
    ctx->pc = 0x1E4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CA0u;
    // 0x1e4ca4: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1E4CA0u, 0x1E4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CA8u;
label_1e4ca8:
    // 0x1e4ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cac: 0xc0799ea  jal         func_1E67A8
    ctx->pc = 0x1E4CACu;
    SET_GPR_U32(ctx, 31, 0x1E4CB4u);
    ctx->pc = 0x1E4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CACu;
    // 0x1e4cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67A8u, 0x1E4CACu, 0x1E4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CB4u;
label_1e4cb4:
    // 0x1e4cb4: 0xc079a44  jal         func_1E6910
    ctx->pc = 0x1E4CB4u;
    SET_GPR_U32(ctx, 31, 0x1E4CBCu);
    ctx->pc = 0x1E4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CB4u;
    // 0x1e4cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6910u, 0x1E4CB4u, 0x1E4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CBCu;
label_1e4cbc:
    // 0x1e4cbc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e4cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4cc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cc4: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1e4cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1e4cc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ccc: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e4cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cd4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E4CD4u;
    SET_GPR_U32(ctx, 31, 0x1E4CDCu);
    ctx->pc = 0x1E4CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CD4u;
    // 0x1e4cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E4CD4u, 0x1E4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CDCu;
label_1e4cdc:
    // 0x1e4cdc: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e4ce0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e4ce4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E4CE4u;
    SET_GPR_U32(ctx, 31, 0x1E4CECu);
    ctx->pc = 0x1E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CE4u;
    // 0x1e4ce8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E4CE4u, 0x1E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CECu;
label_1e4cec:
    // 0x1e4cec: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1E4CECu;
    SET_GPR_U32(ctx, 31, 0x1E4CF4u);
    ctx->pc = 0x1E4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CECu;
    // 0x1e4cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1E4CECu, 0x1E4CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CF4u;
label_1e4cf4:
    // 0x1e4cf4: 0x962503d0  lhu         $a1, 0x3D0($s1)
    ctx->pc = 0x1e4cf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1e4cf8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e4cfc: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x1E4CFCu;
    SET_GPR_U32(ctx, 31, 0x1E4D04u);
    ctx->pc = 0x1E4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CFCu;
    // 0x1e4d00: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x1E4CFCu, 0x1E4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D04u;
label_1e4d04:
    // 0x1e4d04: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1E4D04u;
    SET_GPR_U32(ctx, 31, 0x1E4D0Cu);
    ctx->pc = 0x1E4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D04u;
    // 0x1e4d08: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1E4D04u, 0x1E4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e4d10: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x1E4D10u;
    SET_GPR_U32(ctx, 31, 0x1E4D18u);
    ctx->pc = 0x1E4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D10u;
    // 0x1e4d14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x1E4D10u, 0x1E4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D18u;
label_1e4d18:
    // 0x1e4d18: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4d1c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e4d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4d20: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e4d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4d24: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e4d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4d28: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e4d28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4d2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e4d2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4d30: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1e4d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4d34: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1e4d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4d38: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1e4d38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D40u;
        // 0x1e4d44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4D48u;
}
