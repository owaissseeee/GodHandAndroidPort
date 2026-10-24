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

// Function: MenuInput_stepPageKeys
// Address: 0x1f60d8 - 0x1f6208
void MenuInput_stepPageKeys_0x1f60d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInput_stepPageKeys_0x1f60d8");
#endif

    switch (ctx->pc) {
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61fcu: goto label_1f61fc;
        default: break;
    }

    ctx->pc = 0x1f60d8u;

    // 0x1f60d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f60dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f60e0: 0xdc657650  ld          $a1, 0x7650($v1)
    ctx->pc = 0x1f60e0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x747650u));
    // 0x1f60e4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f60e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f60e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f60ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f60f0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F60F0u;
    {
        const bool branch_taken_0x1f60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60F0u;
        // 0x1f60f4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60f0) {
            ctx->pc = 0x1F6188u;
            goto label_1f6188;
        }
    }
    ctx->pc = 0x1F60F8u;
    // 0x1f60f8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1f60fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f6100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6100u;
    {
        const bool branch_taken_0x1f6100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6100u;
        // 0x1f6104: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6100) {
            ctx->pc = 0x1F6118u;
            goto label_1f6118;
        }
    }
    ctx->pc = 0x1F6108u;
    // 0x1f6108: 0xc07dabe  jal         func_1F6AF8
    ctx->pc = 0x1F6108u;
    SET_GPR_U32(ctx, 31, 0x1F6110u);
    ctx->pc = 0x1F610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6108u;
    // 0x1f610c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AF8u, 0x1F6108u, 0x1F6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6110u;
label_1f6110:
    // 0x1f6110: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F6110u;
    {
        const bool branch_taken_0x1f6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6110u;
        // 0x1f6114: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6110) {
            ctx->pc = 0x1F6194u;
            goto label_1f6194;
        }
    }
    ctx->pc = 0x1F6118u;
label_1f6118:
    // 0x1f6118: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f6118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f611c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F611Cu;
    {
        const bool branch_taken_0x1f611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F611Cu;
        // 0x1f6120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f611c) {
            ctx->pc = 0x1F6148u;
            goto label_1f6148;
        }
    }
    ctx->pc = 0x1F6124u;
    // 0x1f6124: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f6128: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1f6128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f612c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6130: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f6130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6138: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1f6138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1f613c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f6140: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F6140u;
    {
        const bool branch_taken_0x1f6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6140u;
        // 0x1f6144: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6140) {
            ctx->pc = 0x1F61A0u;
            goto label_1f61a0;
        }
    }
    ctx->pc = 0x1F6148u;
label_1f6148:
    // 0x1f6148: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1f6148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1f614c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f6150: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6150u;
    {
        const bool branch_taken_0x1f6150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6150u;
        // 0x1f6154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6150) {
            ctx->pc = 0x1F6174u;
            goto label_1f6174;
        }
    }
    ctx->pc = 0x1F6158u;
    // 0x1f6158: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f615c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1f615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6160: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f6164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f616c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F616Cu;
    {
        const bool branch_taken_0x1f616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F616Cu;
        // 0x1f6170: 0xa0600002  sb          $zero, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f616c) {
            ctx->pc = 0x1F619Cu;
            goto label_1f619c;
        }
    }
    ctx->pc = 0x1F6174u;
label_1f6174:
    // 0x1f6174: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6178: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f6178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f617c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f6180: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6180u;
    {
        const bool branch_taken_0x1f6180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6180u;
        // 0x1f6184: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6180) {
            ctx->pc = 0x1F61BCu;
            goto label_1f61bc;
        }
    }
    ctx->pc = 0x1F6188u;
label_1f6188:
    // 0x1f6188: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1F6188u;
    SET_GPR_U32(ctx, 31, 0x1F6190u);
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1F6188u, 0x1F6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6190u;
label_1f6190:
    // 0x1f6190: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f6194:
    // 0x1f6194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6198: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1f619c:
    // 0x1f619c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
label_1f61a0:
    // 0x1f61a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f61a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f61a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f61a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f61a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f61a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61ac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F61ACu;
    SET_GPR_U32(ctx, 31, 0x1F61B4u);
    ctx->pc = 0x1F61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61ACu;
    // 0x1f61b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F61ACu, 0x1F61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61B4u;
label_1f61b4:
    // 0x1f61b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F61B4u;
    {
        const bool branch_taken_0x1f61b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61B4u;
        // 0x1f61b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61b4) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F61BCu;
label_1f61bc:
    // 0x1f61bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f61bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f61c0: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1f61c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1f61c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f61c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f61c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F61C8u;
    {
        const bool branch_taken_0x1f61c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61c8) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F61D0u;
    // 0x1f61d0: 0xc07dabe  jal         func_1F6AF8
    ctx->pc = 0x1F61D0u;
    SET_GPR_U32(ctx, 31, 0x1F61D8u);
    ctx->pc = 0x1F61D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61D0u;
    // 0x1f61d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AF8u, 0x1F61D0u, 0x1F61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61D8u;
label_1f61d8:
    // 0x1f61d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f61dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f61dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f61e4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f61e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f61e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f61ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f61ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f61f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f61f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F61F4u;
    SET_GPR_U32(ctx, 31, 0x1F61FCu);
    ctx->pc = 0x1F61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61F4u;
    // 0x1f61f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F61F4u, 0x1F61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61FCu;
label_1f61fc:
    // 0x1f61fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6200:
    // 0x1f6200: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6200u;
        // 0x1f6204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6208u;
}
