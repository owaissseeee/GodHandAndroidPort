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

// Function: func_001ED848
// Address: 0x1ed848 - 0x1edc28
void func_001ED848_0x1ed848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED848_0x1ed848");
#endif

    switch (ctx->pc) {
        case 0x1ed914u: goto label_1ed914;
        case 0x1ed930u: goto label_1ed930;
        case 0x1ed93cu: goto label_1ed93c;
        case 0x1ed960u: goto label_1ed960;
        case 0x1ed9d0u: goto label_1ed9d0;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9f8u: goto label_1ed9f8;
        case 0x1eda04u: goto label_1eda04;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda54u: goto label_1eda54;
        case 0x1edac4u: goto label_1edac4;
        case 0x1edae0u: goto label_1edae0;
        case 0x1edaecu: goto label_1edaec;
        case 0x1edb10u: goto label_1edb10;
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edba0u: goto label_1edba0;
        case 0x1edbf0u: goto label_1edbf0;
        default: break;
    }

    ctx->pc = 0x1ed848u;

    // 0x1ed848: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ed84c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ed84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ed850: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ed850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ed854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed858: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ed858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ed85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ed860: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ed860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ed864: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ed864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1ed868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed86c: 0x9e220000  lwu         $v0, 0x0($s1)
    ctx->pc = 0x1ed86cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed870: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ed874: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1ED874u;
    {
        const bool branch_taken_0x1ed874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED874u;
        // 0x1ed878: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed874) {
            ctx->pc = 0x1EDC04u;
            goto label_1edc04;
        }
    }
    ctx->pc = 0x1ED87Cu;
    // 0x1ed87c: 0x8e230348  lw          $v1, 0x348($s1)
    ctx->pc = 0x1ed87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1ed880: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1ed880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ed884: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x1ED884u;
    {
        const bool branch_taken_0x1ed884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED884u;
        // 0x1ed888: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed884) {
            ctx->pc = 0x1EDC04u;
            goto label_1edc04;
        }
    }
    ctx->pc = 0x1ED88Cu;
    // 0x1ed88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed890: 0x2442bda0  addiu       $v0, $v0, -0x4260
    ctx->pc = 0x1ed890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950304));
    // 0x1ed894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed89c: 0x800008  jr          $a0
    ctx->pc = 0x1ED89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED8A4u: goto label_1ed8a4;
            case 0x1ED948u: goto label_1ed948;
            case 0x1EDA3Cu: goto label_1eda3c;
            case 0x1EDAF8u: goto label_1edaf8;
            case 0x1EDB28u: goto label_1edb28;
            case 0x1EDBDCu: goto label_1edbdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED89Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ED8A4u;
label_1ed8a4:
    // 0x1ed8a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ed8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ed8a8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ed8ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ed8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ed8b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ed8b4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ed8b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ed8b8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ed8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ed8bc: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1ed8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1ed8c0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ed8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ed8c4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ed8c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ed8c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ed8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ed8cc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ed8ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ed8d0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ed8d4: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1ed8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1ed8d8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ed8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ed8dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ed8dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ed8e0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ed8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ed8e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ed8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ed8e8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ed8e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ed8ec: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1ed8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ed8f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed8f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ed8f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ed8f8: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1ed8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ed8fc: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1ed8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1ed900: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ed900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ed904: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ed904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ed908: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed90c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1ED910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED90Cu;
    // 0x1ed910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1ED90Cu, 0x1ED914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1ed914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1ed918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ed918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed920: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ed920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed924: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ed924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ed928: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x1ED928u;
    SET_GPR_U32(ctx, 31, 0x1ED930u);
    ctx->pc = 0x1ED92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED928u;
    // 0x1ed92c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x1ED928u, 0x1ED930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED930u;
label_1ed930:
    // 0x1ed930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed934: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED934u;
    SET_GPR_U32(ctx, 31, 0x1ED93Cu);
    ctx->pc = 0x1ED938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED934u;
    // 0x1ed938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED934u, 0x1ED93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED93Cu;
label_1ed93c:
    // 0x1ed93c: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x1ed93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1ed940: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1ED940u;
    {
        const bool branch_taken_0x1ed940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED940u;
        // 0x1ed944: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed940) {
            ctx->pc = 0x1EDBA8u;
            goto label_1edba8;
        }
    }
    ctx->pc = 0x1ED948u;
label_1ed948:
    // 0x1ed948: 0x8e23034c  lw          $v1, 0x34C($s1)
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x1ed94c: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ED94Cu;
    {
        const bool branch_taken_0x1ed94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED94Cu;
        // 0x1ed950: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed94c) {
            ctx->pc = 0x1EDA04u;
            goto label_1eda04;
        }
    }
    ctx->pc = 0x1ED954u;
    // 0x1ed954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed958: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED958u;
    SET_GPR_U32(ctx, 31, 0x1ED960u);
    ctx->pc = 0x1ED95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED958u;
    // 0x1ed95c: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED958u, 0x1ED960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED960u;
label_1ed960:
    // 0x1ed960: 0x263000dc  addiu       $s0, $s1, 0xDC
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x1ed964: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ed964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ed968: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ed96c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ed96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ed970: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ed970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ed974: 0x2653024  and         $a2, $s3, $a1
    ctx->pc = 0x1ed974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x1ed978: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ed978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ed97c: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x1ed97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x1ed980: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ed980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ed984: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ed984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ed988: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ed988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ed98c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ed98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ed990: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1ed990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1ed994: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1ed994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ed998: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ed998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ed99c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ed99cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ed9a0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1ed9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ed9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ed9a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ed9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ed9ac: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1ed9acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ed9b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9b4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ed9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ed9b8: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1ed9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1ed9bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ed9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ed9c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ed9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ed9c4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1ed9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed9c8: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1ED9C8u;
    SET_GPR_U32(ctx, 31, 0x1ED9D0u);
    ctx->pc = 0x1ED9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9C8u;
    // 0x1ed9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1ED9C8u, 0x1ED9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9D0u;
label_1ed9d0:
    // 0x1ed9d0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1ed9d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ed9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ed9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ed9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed9e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ed9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ed9e4: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x1ED9E4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ECu);
    ctx->pc = 0x1ED9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9E4u;
    // 0x1ed9e8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x1ED9E4u, 0x1ED9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9ECu;
label_1ed9ec:
    // 0x1ed9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9f0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED9F0u;
    SET_GPR_U32(ctx, 31, 0x1ED9F8u);
    ctx->pc = 0x1ED9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9F0u;
    // 0x1ed9f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED9F0u, 0x1ED9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9F8u;
label_1ed9f8:
    // 0x1ed9f8: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1ed9fc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1ED9FCu;
    {
        const bool branch_taken_0x1ed9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9FCu;
        // 0x1eda00: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9fc) {
            ctx->pc = 0x1EDBA8u;
            goto label_1edba8;
        }
    }
    ctx->pc = 0x1EDA04u;
label_1eda04:
    // 0x1eda04: 0x5462007c  bnel        $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1EDA04u;
    {
        const bool branch_taken_0x1eda04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eda04) {
            ctx->pc = 0x1EDA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDA04u;
            // 0x1eda08: 0x8e22034c  lw          $v0, 0x34C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDBF8u;
            goto label_1edbf8;
        }
    }
    ctx->pc = 0x1EDA0Cu;
    // 0x1eda0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1eda10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1eda14: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1eda18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1eda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1eda1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eda1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eda20: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x1eda20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1eda24:
    // 0x1eda24: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1eda24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1eda28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eda28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda2c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA34u);
    ctx->pc = 0x1EDA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA2Cu;
    // 0x1eda30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EDA2Cu, 0x1EDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA34u;
label_1eda34:
    // 0x1eda34: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EDA34u;
    {
        const bool branch_taken_0x1eda34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA34u;
        // 0x1eda38: 0x8e22034c  lw          $v0, 0x34C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda34) {
            ctx->pc = 0x1EDBF8u;
            goto label_1edbf8;
        }
    }
    ctx->pc = 0x1EDA3Cu;
label_1eda3c:
    // 0x1eda3c: 0x8e23034c  lw          $v1, 0x34C($s1)
    ctx->pc = 0x1eda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x1eda40: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EDA40u;
    {
        const bool branch_taken_0x1eda40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA40u;
        // 0x1eda44: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda40) {
            ctx->pc = 0x1EDA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda04;
        }
    }
    ctx->pc = 0x1EDA48u;
    // 0x1eda48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eda48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda4c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA54u);
    ctx->pc = 0x1EDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA4Cu;
    // 0x1eda50: 0x262400dc  addiu       $a0, $s1, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EDA4Cu, 0x1EDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA54u;
label_1eda54:
    // 0x1eda54: 0x26300158  addiu       $s0, $s1, 0x158
    ctx->pc = 0x1eda54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x1eda58: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eda58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eda5c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1eda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1eda60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1eda60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1eda64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eda64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eda68: 0x2a53024  and         $a2, $s5, $a1
    ctx->pc = 0x1eda68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
    // 0x1eda6c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1eda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1eda70: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x1eda70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x1eda74: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1eda74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1eda78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1eda78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1eda7c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1eda7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1eda80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1eda80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1eda84: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1eda84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1eda88: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1eda8c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1eda8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1eda90: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1eda90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1eda94: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1eda94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1eda98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1eda98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1eda9c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1eda9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1edaa0: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1edaa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1edaa4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1edaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1edaa8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1edaa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1edaac: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1edaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1edab0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1edab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1edab4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1edab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1edab8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1edab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1edabc: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1EDABCu;
    SET_GPR_U32(ctx, 31, 0x1EDAC4u);
    ctx->pc = 0x1EDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDABCu;
    // 0x1edac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1EDABCu, 0x1EDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAC4u;
label_1edac4:
    // 0x1edac4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1edac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1edac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edad0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1edad4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1edad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1edad8: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x1EDAD8u;
    SET_GPR_U32(ctx, 31, 0x1EDAE0u);
    ctx->pc = 0x1EDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAD8u;
    // 0x1edadc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x1EDAD8u, 0x1EDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAE0u;
label_1edae0:
    // 0x1edae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edae4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EDAE4u;
    SET_GPR_U32(ctx, 31, 0x1EDAECu);
    ctx->pc = 0x1EDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAE4u;
    // 0x1edae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EDAE4u, 0x1EDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAECu;
label_1edaec:
    // 0x1edaec: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x1edaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1edaf0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1EDAF0u;
    {
        const bool branch_taken_0x1edaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAF0u;
        // 0x1edaf4: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edaf0) {
            ctx->pc = 0x1EDBA8u;
            goto label_1edba8;
        }
    }
    ctx->pc = 0x1EDAF8u;
label_1edaf8:
    // 0x1edaf8: 0x8e23034c  lw          $v1, 0x34C($s1)
    ctx->pc = 0x1edaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x1edafc: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1EDAFCu;
    {
        const bool branch_taken_0x1edafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAFCu;
        // 0x1edb00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edafc) {
            ctx->pc = 0x1EDA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda04;
        }
    }
    ctx->pc = 0x1EDB04u;
    // 0x1edb04: 0x26240158  addiu       $a0, $s1, 0x158
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x1edb08: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EDB08u;
    SET_GPR_U32(ctx, 31, 0x1EDB10u);
    ctx->pc = 0x1EDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB08u;
    // 0x1edb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EDB08u, 0x1EDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB10u;
label_1edb10:
    // 0x1edb10: 0x262401d4  addiu       $a0, $s1, 0x1D4
    ctx->pc = 0x1edb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    // 0x1edb14: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EDB14u;
    SET_GPR_U32(ctx, 31, 0x1EDB1Cu);
    ctx->pc = 0x1EDB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB14u;
    // 0x1edb18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EDB14u, 0x1EDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB1Cu;
label_1edb1c:
    // 0x1edb1c: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1edb20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1EDB20u;
    {
        const bool branch_taken_0x1edb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB20u;
        // 0x1edb24: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb20) {
            ctx->pc = 0x1EDBA8u;
            goto label_1edba8;
        }
    }
    ctx->pc = 0x1EDB28u;
label_1edb28:
    // 0x1edb28: 0x8e23034c  lw          $v1, 0x34C($s1)
    ctx->pc = 0x1edb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x1edb2c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EDB2Cu;
    {
        const bool branch_taken_0x1edb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB2Cu;
        // 0x1edb30: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb2c) {
            ctx->pc = 0x1EDBB8u;
            goto label_1edbb8;
        }
    }
    ctx->pc = 0x1EDB34u;
    // 0x1edb34: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1edb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1edb38: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1edb3c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1edb3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1edb40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1edb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1edb44: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1edb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1edb48: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1edb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1edb4c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1edb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1edb50: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1edb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1edb54: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1edb54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1edb58: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1edb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1edb5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1edb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1edb60: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1edb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1edb64: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1edb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1edb68: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1edb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1edb6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1edb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1edb70: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1edb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1edb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1edb78: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1edb78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1edb7c: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1edb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1edb80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1edb84: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1edb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1edb88: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1edb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1edb8c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1edb8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1edb90: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1edb90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1edb94: 0x262401d4  addiu       $a0, $s1, 0x1D4
    ctx->pc = 0x1edb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    // 0x1edb98: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1EDB98u;
    SET_GPR_U32(ctx, 31, 0x1EDBA0u);
    ctx->pc = 0x1EDB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB98u;
    // 0x1edb9c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1EDB98u, 0x1EDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBA0u;
label_1edba0:
    // 0x1edba0: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x1edba4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1edba8:
    // 0x1edba8: 0xae23034c  sw          $v1, 0x34C($s1)
    ctx->pc = 0x1edba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 3));
    // 0x1edbac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1edbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1edbb0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EDBB0u;
    {
        const bool branch_taken_0x1edbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBB0u;
        // 0x1edbb4: 0xae220348  sw          $v0, 0x348($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbb0) {
            ctx->pc = 0x1EDC00u;
            goto label_1edc00;
        }
    }
    ctx->pc = 0x1EDBB8u;
label_1edbb8:
    // 0x1edbb8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDBB8u;
    {
        const bool branch_taken_0x1edbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edbb8) {
            ctx->pc = 0x1EDBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDBB8u;
            // 0x1edbbc: 0x8e22034c  lw          $v0, 0x34C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDBF8u;
            goto label_1edbf8;
        }
    }
    ctx->pc = 0x1EDBC0u;
    // 0x1edbc0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1edbc4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1edbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1edbc8: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1edbcc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1edbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1edbd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edbd4: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x1EDBD4u;
    {
        const bool branch_taken_0x1edbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBD4u;
        // 0x1edbd8: 0x240600b1  addiu       $a2, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbd4) {
            ctx->pc = 0x1EDA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda24;
        }
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x8e22034c  lw          $v0, 0x34C($s1)
    ctx->pc = 0x1edbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x1edbe0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDBE0u;
    {
        const bool branch_taken_0x1edbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBE0u;
        // 0x1edbe4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbe0) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBE8u;
    // 0x1edbe8: 0xc07b5f8  jal         func_1ED7E0
    ctx->pc = 0x1EDBE8u;
    SET_GPR_U32(ctx, 31, 0x1EDBF0u);
    ctx->pc = 0x1EDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBE8u;
    // 0x1edbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED7E0u, 0x1EDBE8u, 0x1EDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBF0u;
label_1edbf0:
    // 0x1edbf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDBF0u;
    {
        const bool branch_taken_0x1edbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBF0u;
        // 0x1edbf4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbf0) {
            ctx->pc = 0x1EDC04u;
            goto label_1edc04;
        }
    }
    ctx->pc = 0x1EDBF8u;
label_1edbf8:
    // 0x1edbf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1edbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1edbfc:
    // 0x1edbfc: 0xae22034c  sw          $v0, 0x34C($s1)
    ctx->pc = 0x1edbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 2));
label_1edc00:
    // 0x1edc00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1edc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1edc04:
    // 0x1edc04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1edc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1edc08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1edc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edc0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1edc0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edc10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1edc10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edc14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1edc14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC1Cu;
        // 0x1edc20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC24u;
    // 0x1edc24: 0x0  nop
    ctx->pc = 0x1edc24u;
    // NOP
    ctx->pc = 0x1edc28u;
}
