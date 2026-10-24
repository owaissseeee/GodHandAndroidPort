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

// Function: func_001680D8
// Address: 0x1680d8 - 0x1682a8
void func_001680D8_0x1680d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001680D8_0x1680d8");
#endif

    switch (ctx->pc) {
        case 0x168298u: goto label_168298;
        default: break;
    }

    ctx->pc = 0x1680d8u;

    // 0x1680d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1680d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1680dc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1680dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1680e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1680e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1680e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1680e8: 0x8103005a  lb          $v1, 0x5A($t0)
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 90)));
    // 0x1680ec: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1680ECu;
    {
        const bool branch_taken_0x1680ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680ec) {
            ctx->pc = 0x16813Cu;
            goto label_16813c;
        }
    }
    ctx->pc = 0x1680F4u;
    // 0x1680f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1680F4u;
    {
        const bool branch_taken_0x1680f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F4u;
        // 0x1680f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680f4) {
            ctx->pc = 0x16810Cu;
            goto label_16810c;
        }
    }
    ctx->pc = 0x1680FCu;
    // 0x1680fc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1680FCu;
    {
        const bool branch_taken_0x1680fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1680fc) {
            ctx->pc = 0x168100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1680FCu;
            // 0x168100: 0x91020090  lbu         $v0, 0x90($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16811Cu;
            goto label_16811c;
        }
    }
    ctx->pc = 0x168104u;
    // 0x168104: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x168104u;
    {
        const bool branch_taken_0x168104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168104u;
        // 0x168108: 0x8d030080  lw          $v1, 0x80($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168104) {
            ctx->pc = 0x16818Cu;
            goto label_16818c;
        }
    }
    ctx->pc = 0x16810Cu;
label_16810c:
    // 0x16810c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16810Cu;
    {
        const bool branch_taken_0x16810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16810c) {
            ctx->pc = 0x168110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16810Cu;
            // 0x168110: 0x91020064  lbu         $v0, 0x64($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168144u;
            goto label_168144;
        }
    }
    ctx->pc = 0x168114u;
    // 0x168114: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x168114u;
    {
        const bool branch_taken_0x168114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168114u;
        // 0x168118: 0x8d030080  lw          $v1, 0x80($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168114) {
            ctx->pc = 0x16818Cu;
            goto label_16818c;
        }
    }
    ctx->pc = 0x16811Cu;
label_16811c:
    // 0x16811c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x168120: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x168120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168124: 0x2c630081  sltiu       $v1, $v1, 0x81
    ctx->pc = 0x168124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x168128: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x168128u;
    {
        const bool branch_taken_0x168128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168128u;
        // 0x16812c: 0xa1020090  sb          $v0, 0x90($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168128) {
            ctx->pc = 0x168188u;
            goto label_168188;
        }
    }
    ctx->pc = 0x168130u;
    // 0x168130: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x168130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x168134: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x168134u;
    {
        const bool branch_taken_0x168134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168134u;
        // 0x168138: 0xa104005a  sb          $a0, 0x5A($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 90), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168134) {
            ctx->pc = 0x168184u;
            goto label_168184;
        }
    }
    ctx->pc = 0x16813Cu;
label_16813c:
    // 0x16813c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16813Cu;
    {
        const bool branch_taken_0x16813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16813Cu;
        // 0x168140: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16813c) {
            ctx->pc = 0x168184u;
            goto label_168184;
        }
    }
    ctx->pc = 0x168144u;
label_168144:
    // 0x168144: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168144u;
    {
        const bool branch_taken_0x168144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x168144) {
            ctx->pc = 0x168148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168144u;
            // 0x168148: 0x91020090  lbu         $v0, 0x90($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168164u;
            goto label_168164;
        }
    }
    ctx->pc = 0x16814Cu;
    // 0x16814c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x16814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x168150: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x168150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168154: 0xa1020090  sb          $v0, 0x90($t0)
    ctx->pc = 0x168154u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x168158: 0xad030060  sw          $v1, 0x60($t0)
    ctx->pc = 0x168158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 3));
    // 0x16815c: 0xa100005a  sb          $zero, 0x5A($t0)
    ctx->pc = 0x16815cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x168160: 0x91020090  lbu         $v0, 0x90($t0)
    ctx->pc = 0x168160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
label_168164:
    // 0x168164: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x168164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x168168: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x168168) {
            ctx->pc = 0x16816Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168168u;
            // 0x16816c: 0xa1020090  sb          $v0, 0x90($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 144), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168188u;
            goto label_168188;
        }
    }
    ctx->pc = 0x168170u;
    // 0x168170: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168174: 0xa1000090  sb          $zero, 0x90($t0)
    ctx->pc = 0x168174u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x168178: 0xad020060  sw          $v0, 0x60($t0)
    ctx->pc = 0x168178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 2));
    // 0x16817c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16817Cu;
    {
        const bool branch_taken_0x16817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16817Cu;
        // 0x168180: 0xa100005a  sb          $zero, 0x5A($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16817c) {
            ctx->pc = 0x168188u;
            goto label_168188;
        }
    }
    ctx->pc = 0x168184u;
label_168184:
    // 0x168184: 0xa1020090  sb          $v0, 0x90($t0)
    ctx->pc = 0x168184u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 144), (uint8_t)GPR_U32(ctx, 2));
label_168188:
    // 0x168188: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x168188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_16818c:
    // 0x16818c: 0x91020090  lbu         $v0, 0x90($t0)
    ctx->pc = 0x16818cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x168190: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x168190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x168194: 0x81070091  lb          $a3, 0x91($t0)
    ctx->pc = 0x168194u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 145)));
    // 0x168198: 0x50e0001a  beql        $a3, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x168198u;
    {
        const bool branch_taken_0x168198 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x168198) {
            ctx->pc = 0x16819Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168198u;
            // 0x16819c: 0x8d050084  lw          $a1, 0x84($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168204u;
            goto label_168204;
        }
    }
    ctx->pc = 0x1681A0u;
    // 0x1681a0: 0x1ce00006  bgtz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1681A0u;
    {
        const bool branch_taken_0x1681a0 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1681A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681A0u;
        // 0x1681a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681a0) {
            ctx->pc = 0x1681BCu;
            goto label_1681bc;
        }
    }
    ctx->pc = 0x1681A8u;
    // 0x1681a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1681a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1681ac: 0x50e20007  beql        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1681ACu;
    {
        const bool branch_taken_0x1681ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1681ac) {
            ctx->pc = 0x1681B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1681ACu;
            // 0x1681b0: 0x8d050084  lw          $a1, 0x84($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1681CCu;
            goto label_1681cc;
        }
    }
    ctx->pc = 0x1681B4u;
    // 0x1681b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1681B4u;
    {
        const bool branch_taken_0x1681b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681b4) {
            ctx->pc = 0x168290u;
            goto label_168290;
        }
    }
    ctx->pc = 0x1681BCu;
label_1681bc:
    // 0x1681bc: 0x50e20023  beql        $a3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1681BCu;
    {
        const bool branch_taken_0x1681bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1681bc) {
            ctx->pc = 0x1681C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1681BCu;
            // 0x1681c0: 0x8d050084  lw          $a1, 0x84($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16824Cu;
            goto label_16824c;
        }
    }
    ctx->pc = 0x1681C4u;
    // 0x1681c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1681C4u;
    {
        const bool branch_taken_0x1681c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681c4) {
            ctx->pc = 0x168290u;
            goto label_168290;
        }
    }
    ctx->pc = 0x1681CCu;
label_1681cc:
    // 0x1681cc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1681ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1681d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1681d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1681d4: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1681d8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1681d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1681dc: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x1681dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x1681e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1681e4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1681e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1681e8: 0x8d040088  lw          $a0, 0x88($t0)
    ctx->pc = 0x1681e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x1681ec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1681ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1681f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1681f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1681f4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1681f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1681f8: 0x8ce3d930  lw          $v1, -0x26D0($a3)
    ctx->pc = 0x1681f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294957360)));
    // 0x1681fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1681FCu;
    {
        const bool branch_taken_0x1681fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681FCu;
        // 0x168200: 0xa0600edd  sb          $zero, 0xEDD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3805), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681fc) {
            ctx->pc = 0x168290u;
            goto label_168290;
        }
    }
    ctx->pc = 0x168204u;
label_168204:
    // 0x168204: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x168204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x168208: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x168208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16820c: 0x3c01c338  lui         $at, 0xC338
    ctx->pc = 0x16820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49976 << 16));
    // 0x168210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168214: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x168214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168218: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16821c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x168220: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x168220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x168224: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x168224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168228: 0x8d040088  lw          $a0, 0x88($t0)
    ctx->pc = 0x168228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x16822c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x168230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x168234: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x168234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168238: 0x8d030088  lw          $v1, 0x88($t0)
    ctx->pc = 0x168238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x16823c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x16823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x168240: 0x8cc2d930  lw          $v0, -0x26D0($a2)
    ctx->pc = 0x168240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294957360)));
    // 0x168244: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x168244u;
    {
        const bool branch_taken_0x168244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168244u;
        // 0x168248: 0xa0400edd  sb          $zero, 0xEDD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3805), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168244) {
            ctx->pc = 0x168290u;
            goto label_168290;
        }
    }
    ctx->pc = 0x16824Cu;
label_16824c:
    // 0x16824c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x168250: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x168250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x168254: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x168254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x168258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16825c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x16825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168260: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x168260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x168264: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x168264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x168268: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x168268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16826c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16826cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x168270: 0x8d040088  lw          $a0, 0x88($t0)
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x168274: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x168278: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16827c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16827cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x168280: 0x8d030088  lw          $v1, 0x88($t0)
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x168284: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x168284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x168288: 0x8cc2d930  lw          $v0, -0x26D0($a2)
    ctx->pc = 0x168288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294957360)));
    // 0x16828c: 0xa0470edd  sb          $a3, 0xEDD($v0)
    ctx->pc = 0x16828cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3805), (uint8_t)GPR_U32(ctx, 7));
label_168290:
    // 0x168290: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x168290u;
    SET_GPR_U32(ctx, 31, 0x168298u);
    ctx->pc = 0x168294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168290u;
    // 0x168294: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x168290u, 0x168298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168298u;
label_168298:
    // 0x168298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16829c: 0x3e00008  jr          $ra
    ctx->pc = 0x16829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16829Cu;
        // 0x1682a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1682A4u;
    // 0x1682a4: 0x0  nop
    ctx->pc = 0x1682a4u;
    // NOP
    ctx->pc = 0x1682a8u;
}
