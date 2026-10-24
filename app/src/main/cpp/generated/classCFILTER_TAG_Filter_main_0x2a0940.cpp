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

// Function: classCFILTER_TAG_Filter_main
// Address: 0x2a0940 - 0x2a0c60
void classCFILTER_TAG_Filter_main_0x2a0940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classCFILTER_TAG_Filter_main_0x2a0940");
#endif

    switch (ctx->pc) {
        case 0x2a0988u: goto label_2a0988;
        case 0x2a099cu: goto label_2a099c;
        case 0x2a09e0u: goto label_2a09e0;
        case 0x2a0a00u: goto label_2a0a00;
        case 0x2a0a18u: goto label_2a0a18;
        case 0x2a0a30u: goto label_2a0a30;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0a68u: goto label_2a0a68;
        case 0x2a0a84u: goto label_2a0a84;
        case 0x2a0aa0u: goto label_2a0aa0;
        case 0x2a0abcu: goto label_2a0abc;
        case 0x2a0ad4u: goto label_2a0ad4;
        case 0x2a0aecu: goto label_2a0aec;
        case 0x2a0b20u: goto label_2a0b20;
        case 0x2a0b5cu: goto label_2a0b5c;
        case 0x2a0b80u: goto label_2a0b80;
        case 0x2a0b90u: goto label_2a0b90;
        case 0x2a0ba0u: goto label_2a0ba0;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0bc4u: goto label_2a0bc4;
        case 0x2a0bd4u: goto label_2a0bd4;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c30u: goto label_2a0c30;
        case 0x2a0c38u: goto label_2a0c38;
        case 0x2a0c40u: goto label_2a0c40;
        default: break;
    }

    ctx->pc = 0x2a0940u;

    // 0x2a0940: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a0940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a0944: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a0948: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x2a0948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x2a094c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2a094cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2a0950: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a0954: 0x24467a80  addiu       $a2, $v0, 0x7A80
    ctx->pc = 0x2a0954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x2a0958: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a095c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a095cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0964: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a0968: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2a096c: 0x146000b4  bnez        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2A096Cu;
    {
        const bool branch_taken_0x2a096c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A096Cu;
        // 0x2a0970: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a096c) {
            ctx->pc = 0x2A0C40u;
            goto label_2a0c40;
        }
    }
    ctx->pc = 0x2A0974u;
    // 0x2a0974: 0x24d3fa20  addiu       $s3, $a2, -0x5E0
    ctx->pc = 0x2a0974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965792));
    // 0x2a0978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a097c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a097cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a0980: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A0980u;
    SET_GPR_U32(ctx, 31, 0x2A0988u);
    ctx->pc = 0x2A0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0980u;
    // 0x2a0984: 0x24120e00  addiu       $s2, $zero, 0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A0980u, 0x2A0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0988u;
label_2a0988:
    // 0x2a0988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a098c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a098cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a0990: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a0990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a0994: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0994u;
    SET_GPR_U32(ctx, 31, 0x2A099Cu);
    ctx->pc = 0x2A0998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0994u;
    // 0x2a0998: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0994u, 0x2A099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A099Cu;
label_2a099c:
    // 0x2a099c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a09a0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2a09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a09a4: 0xdc8340c8  ld          $v1, 0x40C8($a0)
    ctx->pc = 0x2a09a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16584)));
    // 0x2a09a8: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2a09a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2a09ac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A09ACu;
    {
        const bool branch_taken_0x2a09ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09ac) {
            ctx->pc = 0x2A09B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A09ACu;
            // 0x2a09b0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A09E4u;
            goto label_2a09e4;
        }
    }
    ctx->pc = 0x2A09B4u;
    // 0x2a09b4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2a09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a09b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A09B8u;
    {
        const bool branch_taken_0x2a09b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09b8) {
            ctx->pc = 0x2A09D8u;
            goto label_2a09d8;
        }
    }
    ctx->pc = 0x2A09C0u;
    // 0x2a09c0: 0xdc824098  ld          $v0, 0x4098($a0)
    ctx->pc = 0x2a09c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16536)));
    // 0x2a09c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a09c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a09c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A09C8u;
    {
        const bool branch_taken_0x2a09c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09C8u;
        // 0x2a09cc: 0x30624018  andi        $v0, $v1, 0x4018 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16408);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09c8) {
            ctx->pc = 0x2A09D8u;
            goto label_2a09d8;
        }
    }
    ctx->pc = 0x2A09D0u;
    // 0x2a09d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A09D0u;
    {
        const bool branch_taken_0x2a09d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09D0u;
        // 0x2a09d4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09d0) {
            ctx->pc = 0x2A09E4u;
            goto label_2a09e4;
        }
    }
    ctx->pc = 0x2A09D8u;
label_2a09d8:
    // 0x2a09d8: 0xc0a6778  jal         func_299DE0
    ctx->pc = 0x2A09D8u;
    SET_GPR_U32(ctx, 31, 0x2A09E0u);
    ctx->pc = 0x2A09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09D8u;
    // 0x2a09dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299DE0u, 0x2A09D8u, 0x2A09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09E0u;
label_2a09e0:
    // 0x2a09e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2a09e4:
    // 0x2a09e4: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x2a09e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a09e8: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a09e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
    // 0x2a09ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2a09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2a09f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A09F0u;
    {
        const bool branch_taken_0x2a09f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09f0) {
            ctx->pc = 0x2A09F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A09F0u;
            // 0x2a09f4: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A04u;
            goto label_2a0a04;
        }
    }
    ctx->pc = 0x2A09F8u;
    // 0x2a09f8: 0xc0a7df6  jal         func_29F7D8
    ctx->pc = 0x2A09F8u;
    SET_GPR_U32(ctx, 31, 0x2A0A00u);
    ctx->pc = 0x2A09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09F8u;
    // 0x2a09fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F7D8u, 0x2A09F8u, 0x2A0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A00u;
label_2a0a00:
    // 0x2a0a00: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a04:
    // 0x2a0a04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a0a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a0a08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A08u;
    {
        const bool branch_taken_0x2a0a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a08) {
            ctx->pc = 0x2A0A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A08u;
            // 0x2a0a0c: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A0A10u;
    // 0x2a0a10: 0xc0a6b04  jal         func_29AC10
    ctx->pc = 0x2A0A10u;
    SET_GPR_U32(ctx, 31, 0x2A0A18u);
    ctx->pc = 0x2A0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A10u;
    // 0x2a0a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC10u, 0x2A0A10u, 0x2A0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A18u;
label_2a0a18:
    // 0x2a0a18: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a1c:
    // 0x2a0a1c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2a0a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2a0a20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A20u;
    {
        const bool branch_taken_0x2a0a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a20) {
            ctx->pc = 0x2A0A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A20u;
            // 0x2a0a24: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A34u;
            goto label_2a0a34;
        }
    }
    ctx->pc = 0x2A0A28u;
    // 0x2a0a28: 0xc0a6eae  jal         func_29BAB8
    ctx->pc = 0x2A0A28u;
    SET_GPR_U32(ctx, 31, 0x2A0A30u);
    ctx->pc = 0x2A0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A28u;
    // 0x2a0a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BAB8u, 0x2A0A28u, 0x2A0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A30u;
label_2a0a30:
    // 0x2a0a30: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a34:
    // 0x2a0a34: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2a0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a0a38: 0x30421040  andi        $v0, $v0, 0x1040
    ctx->pc = 0x2a0a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4160);
    // 0x2a0a3c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A3Cu;
    {
        const bool branch_taken_0x2a0a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0a3c) {
            ctx->pc = 0x2A0A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A3Cu;
            // 0x2a0a40: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A50u;
            goto label_2a0a50;
        }
    }
    ctx->pc = 0x2A0A44u;
    // 0x2a0a44: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2A0A44u;
    SET_GPR_U32(ctx, 31, 0x2A0A4Cu);
    ctx->pc = 0x2A0A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A44u;
    // 0x2a0a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2A0A44u, 0x2A0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A4Cu;
label_2a0a4c:
    // 0x2a0a4c: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a50:
    // 0x2a0a50: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a0a54: 0x30421080  andi        $v0, $v0, 0x1080
    ctx->pc = 0x2a0a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4224);
    // 0x2a0a58: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A58u;
    {
        const bool branch_taken_0x2a0a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0a58) {
            ctx->pc = 0x2A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A58u;
            // 0x2a0a5c: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A6Cu;
            goto label_2a0a6c;
        }
    }
    ctx->pc = 0x2A0A60u;
    // 0x2a0a60: 0xc0a769c  jal         func_29DA70
    ctx->pc = 0x2A0A60u;
    SET_GPR_U32(ctx, 31, 0x2A0A68u);
    ctx->pc = 0x2A0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A60u;
    // 0x2a0a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DA70u, 0x2A0A60u, 0x2A0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A68u;
label_2a0a68:
    // 0x2a0a68: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a6c:
    // 0x2a0a6c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0a70: 0x30421008  andi        $v0, $v0, 0x1008
    ctx->pc = 0x2a0a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4104);
    // 0x2a0a74: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A74u;
    {
        const bool branch_taken_0x2a0a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0a74) {
            ctx->pc = 0x2A0A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A74u;
            // 0x2a0a78: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A88u;
            goto label_2a0a88;
        }
    }
    ctx->pc = 0x2A0A7Cu;
    // 0x2a0a7c: 0xc0a7a38  jal         func_29E8E0
    ctx->pc = 0x2A0A7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A84u);
    ctx->pc = 0x2A0A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A7Cu;
    // 0x2a0a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8E0u, 0x2A0A7Cu, 0x2A0A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A84u;
label_2a0a84:
    // 0x2a0a84: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0a84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0a88:
    // 0x2a0a88: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x2a0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a0a8c: 0x30425000  andi        $v0, $v0, 0x5000
    ctx->pc = 0x2a0a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)20480);
    // 0x2a0a90: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A90u;
    {
        const bool branch_taken_0x2a0a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0a90) {
            ctx->pc = 0x2A0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0A90u;
            // 0x2a0a94: 0xde0240c8  ld          $v0, 0x40C8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0AA4u;
            goto label_2a0aa4;
        }
    }
    ctx->pc = 0x2A0A98u;
    // 0x2a0a98: 0xc0a8e6a  jal         func_2A39A8
    ctx->pc = 0x2A0A98u;
    SET_GPR_U32(ctx, 31, 0x2A0AA0u);
    ctx->pc = 0x2A0A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A98u;
    // 0x2a0a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A39A8u, 0x2A0A98u, 0x2A0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AA0u;
label_2a0aa0:
    // 0x2a0aa0: 0xde0240c8  ld          $v0, 0x40C8($s0)
    ctx->pc = 0x2a0aa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16584)));
label_2a0aa4:
    // 0x2a0aa4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0aa8: 0x30421010  andi        $v0, $v0, 0x1010
    ctx->pc = 0x2a0aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4112);
    // 0x2a0aac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0AACu;
    {
        const bool branch_taken_0x2a0aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0aac) {
            ctx->pc = 0x2A0AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0AACu;
            // 0x2a0ab0: 0xde024098  ld          $v0, 0x4098($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0AC0u;
            goto label_2a0ac0;
        }
    }
    ctx->pc = 0x2A0AB4u;
    // 0x2a0ab4: 0xc0a78b0  jal         func_29E2C0
    ctx->pc = 0x2A0AB4u;
    SET_GPR_U32(ctx, 31, 0x2A0ABCu);
    ctx->pc = 0x2A0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AB4u;
    // 0x2a0ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2C0u, 0x2A0AB4u, 0x2A0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0ABCu;
label_2a0abc:
    // 0x2a0abc: 0xde024098  ld          $v0, 0x4098($s0)
    ctx->pc = 0x2a0abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16536)));
label_2a0ac0:
    // 0x2a0ac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0ac4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0AC4u;
    {
        const bool branch_taken_0x2a0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ac4) {
            ctx->pc = 0x2A0AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0AC4u;
            // 0x2a0ac8: 0xde024098  ld          $v0, 0x4098($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0AD8u;
            goto label_2a0ad8;
        }
    }
    ctx->pc = 0x2A0ACCu;
    // 0x2a0acc: 0xc0a8318  jal         func_2A0C60
    ctx->pc = 0x2A0ACCu;
    SET_GPR_U32(ctx, 31, 0x2A0AD4u);
    ctx->pc = 0x2A0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0ACCu;
    // 0x2a0ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0C60u, 0x2A0ACCu, 0x2A0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AD4u;
label_2a0ad4:
    // 0x2a0ad4: 0xde024098  ld          $v0, 0x4098($s0)
    ctx->pc = 0x2a0ad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16536)));
label_2a0ad8:
    // 0x2a0ad8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a0adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0ADCu;
    {
        const bool branch_taken_0x2a0adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ADCu;
        // 0x2a0ae0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0adc) {
            ctx->pc = 0x2A0AF0u;
            goto label_2a0af0;
        }
    }
    ctx->pc = 0x2A0AE4u;
    // 0x2a0ae4: 0xc0a843a  jal         func_2A10E8
    ctx->pc = 0x2A0AE4u;
    SET_GPR_U32(ctx, 31, 0x2A0AECu);
    ctx->pc = 0x2A0AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0AE4u;
    // 0x2a0ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A10E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E8u, 0x2A0AE4u, 0x2A0AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AECu;
label_2a0aec:
    // 0x2a0aec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2a0af0:
    // 0x2a0af0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a0af4: 0xdc434098  ld          $v1, 0x4098($v0)
    ctx->pc = 0x2a0af4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x2a0af8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2a0af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2a0afc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0AFCu;
    {
        const bool branch_taken_0x2a0afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AFCu;
        // 0x2a0b00: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0afc) {
            ctx->pc = 0x2A0B18u;
            goto label_2a0b18;
        }
    }
    ctx->pc = 0x2A0B04u;
    // 0x2a0b04: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x2a0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x2a0b08: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2a0b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2a0b0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0b10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0B10u;
    {
        const bool branch_taken_0x2a0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B10u;
        // 0x2a0b14: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b10) {
            ctx->pc = 0x2A0B24u;
            goto label_2a0b24;
        }
    }
    ctx->pc = 0x2A0B18u;
label_2a0b18:
    // 0x2a0b18: 0xc0a8590  jal         func_2A1640
    ctx->pc = 0x2A0B18u;
    SET_GPR_U32(ctx, 31, 0x2A0B20u);
    ctx->pc = 0x2A0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B18u;
    // 0x2a0b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1640u, 0x2A0B18u, 0x2A0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B20u;
label_2a0b20:
    // 0x2a0b20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2a0b24:
    // 0x2a0b24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a0b28: 0xdc4540c8  ld          $a1, 0x40C8($v0)
    ctx->pc = 0x2a0b28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16584)));
    // 0x2a0b2c: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x2a0b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x2a0b30: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0B30u;
    {
        const bool branch_taken_0x2a0b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B30u;
        // 0x2a0b34: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b30) {
            ctx->pc = 0x2A0B54u;
            goto label_2a0b54;
        }
    }
    ctx->pc = 0x2A0B38u;
    // 0x2a0b38: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2a0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2a0b3c: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x2a0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x2a0b40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a0b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a0b44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0B44u;
    {
        const bool branch_taken_0x2a0b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B44u;
        // 0x2a0b48: 0x30a21000  andi        $v0, $a1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b44) {
            ctx->pc = 0x2A0B54u;
            goto label_2a0b54;
        }
    }
    ctx->pc = 0x2A0B4Cu;
    // 0x2a0b4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0B4Cu;
    {
        const bool branch_taken_0x2a0b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B4Cu;
        // 0x2a0b50: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b4c) {
            ctx->pc = 0x2A0B64u;
            goto label_2a0b64;
        }
    }
    ctx->pc = 0x2A0B54u;
label_2a0b54:
    // 0x2a0b54: 0xc0a86fe  jal         func_2A1BF8
    ctx->pc = 0x2A0B54u;
    SET_GPR_U32(ctx, 31, 0x2A0B5Cu);
    ctx->pc = 0x2A0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B54u;
    // 0x2a0b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1BF8u, 0x2A0B54u, 0x2A0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B5Cu;
label_2a0b5c:
    // 0x2a0b5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0B5Cu;
    {
        const bool branch_taken_0x2a0b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B5Cu;
        // 0x2a0b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b5c) {
            ctx->pc = 0x2A0B78u;
            goto label_2a0b78;
        }
    }
    ctx->pc = 0x2A0B64u;
label_2a0b64:
    // 0x2a0b64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a0b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a0b68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a0b6c: 0xa4401ada  sh          $zero, 0x1ADA($v0)
    ctx->pc = 0x2a0b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6874), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0b70: 0xa0401ad8  sb          $zero, 0x1AD8($v0)
    ctx->pc = 0x2a0b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b78:
    // 0x2a0b78: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A0B78u;
    SET_GPR_U32(ctx, 31, 0x2A0B80u);
    ctx->pc = 0x2A0B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B78u;
    // 0x2a0b7c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A0B78u, 0x2A0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B80u;
label_2a0b80:
    // 0x2a0b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0b88: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A0B88u;
    SET_GPR_U32(ctx, 31, 0x2A0B90u);
    ctx->pc = 0x2A0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B88u;
    // 0x2a0b8c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A0B88u, 0x2A0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B90u;
label_2a0b90:
    // 0x2a0b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b94: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0b98: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0B98u;
    SET_GPR_U32(ctx, 31, 0x2A0BA0u);
    ctx->pc = 0x2A0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B98u;
    // 0x2a0b9c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0B98u, 0x2A0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BA0u;
label_2a0ba0:
    // 0x2a0ba0: 0xde660490  ld          $a2, 0x490($s3)
    ctx->pc = 0x2a0ba0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 1168)));
    // 0x2a0ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ba8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0BA8u;
    SET_GPR_U32(ctx, 31, 0x2A0BB0u);
    ctx->pc = 0x2A0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BA8u;
    // 0x2a0bac: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0BA8u, 0x2A0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BB0u;
label_2a0bb0:
    // 0x2a0bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bb4: 0x3c060a00  lui         $a2, 0xA00
    ctx->pc = 0x2a0bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2560 << 16));
    // 0x2a0bb8: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2a0bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2a0bbc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0BBCu;
    SET_GPR_U32(ctx, 31, 0x2A0BC4u);
    ctx->pc = 0x2A0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BBCu;
    // 0x2a0bc0: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0BBCu, 0x2A0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BC4u;
label_2a0bc4:
    // 0x2a0bc4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2a0bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bcc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0BCCu;
    SET_GPR_U32(ctx, 31, 0x2A0BD4u);
    ctx->pc = 0x2A0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BCCu;
    // 0x2a0bd0: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0BCCu, 0x2A0BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BD4u;
label_2a0bd4:
    // 0x2a0bd4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a0bd8: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x2a0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a0bdc: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x2a0bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a0be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0be4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0be8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a0be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a0bec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0bf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0bf4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a0bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a0bf8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0BF8u;
    SET_GPR_U32(ctx, 31, 0x2A0C00u);
    ctx->pc = 0x2A0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BF8u;
    // 0x2a0bfc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0BF8u, 0x2A0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C00u;
label_2a0c00:
    // 0x2a0c00: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x2a0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a0c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0c08: 0x123942  srl         $a3, $s2, 5
    ctx->pc = 0x2a0c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x2a0c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a0c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0c14: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a0c18: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2a0c18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a0c1c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a0c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0c20: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a0c20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a0c24: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0c28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0C28u;
    SET_GPR_U32(ctx, 31, 0x2A0C30u);
    ctx->pc = 0x2A0C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C28u;
    // 0x2a0c2c: 0xe63025  or          $a2, $a3, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0C28u, 0x2A0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C30u;
label_2a0c30:
    // 0x2a0c30: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A0C30u;
    SET_GPR_U32(ctx, 31, 0x2A0C38u);
    ctx->pc = 0x2A0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C30u;
    // 0x2a0c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A0C30u, 0x2A0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C38u;
label_2a0c38:
    // 0x2a0c38: 0xc0a6652  jal         func_299948
    ctx->pc = 0x2A0C38u;
    SET_GPR_U32(ctx, 31, 0x2A0C40u);
    ctx->pc = 0x2A0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C38u;
    // 0x2a0c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299948u, 0x2A0C38u, 0x2A0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C40u;
label_2a0c40:
    // 0x2a0c40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a0c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0c44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a0c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0c4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a0c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C54u;
        // 0x2a0c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0C5Cu;
    // 0x2a0c5c: 0x0  nop
    ctx->pc = 0x2a0c5cu;
    // NOP
    ctx->pc = 0x2a0c60u;
}
