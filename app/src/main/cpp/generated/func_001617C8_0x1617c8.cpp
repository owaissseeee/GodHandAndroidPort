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

// Function: func_001617C8
// Address: 0x1617c8 - 0x161970
void func_001617C8_0x1617c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001617C8_0x1617c8");
#endif

    switch (ctx->pc) {
        case 0x1617e8u: goto label_1617e8;
        case 0x161960u: goto label_161960;
        default: break;
    }

    ctx->pc = 0x1617c8u;

    // 0x1617c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1617c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1617cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1617d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1617d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1617d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617d8: 0x24ea0080  addiu       $t2, $a3, 0x80
    ctx->pc = 0x1617d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x1617dc: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x1617dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
    // 0x1617e0: 0x24e600a0  addiu       $a2, $a3, 0xA0
    ctx->pc = 0x1617e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x1617e4: 0x0  nop
    ctx->pc = 0x1617e4u;
    // NOP
label_1617e8:
    // 0x1617e8: 0x8cc4ffe0  lw          $a0, -0x20($a2)
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967264)));
    // 0x1617ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1617f0: 0x2d050004  sltiu       $a1, $t0, 0x4
    ctx->pc = 0x1617f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1617f4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1617f8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1617f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1617fc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1617fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161800: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x161800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161804: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x161804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x161808: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16180c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x16180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x161810: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x161810u;
    {
        const bool branch_taken_0x161810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x161814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161810u;
        // 0x161814: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161810) {
            ctx->pc = 0x1617E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1617e8;
        }
    }
    ctx->pc = 0x161818u;
    // 0x161818: 0x80e200bc  lb          $v0, 0xBC($a3)
    ctx->pc = 0x161818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x16181c: 0x3c08f7ff  lui         $t0, 0xF7FF
    ctx->pc = 0x16181cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63487 << 16));
    // 0x161820: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x161820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x161824: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x161828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16182c: 0x24a57a24  addiu       $a1, $a1, 0x7A24
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31268));
    // 0x161830: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x161830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x161834: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x161834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x161838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x161838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16183c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161840: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x161840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x161844: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x161844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x161848: 0x80e200bc  lb          $v0, 0xBC($a3)
    ctx->pc = 0x161848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x16184c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x161850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161854: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x161854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x161858: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x161858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16185c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x16185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161860: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x161860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x161864: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x161864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x161868: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16186c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x161870: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x161870u;
    {
        const bool branch_taken_0x161870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161870u;
        // 0x161874: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161870) {
            ctx->pc = 0x1618E8u;
            goto label_1618e8;
        }
    }
    ctx->pc = 0x161878u;
    // 0x161878: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x161878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x16187c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161884: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161888: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x161888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x16188c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161890: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161894: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161898: 0x8ce400b8  lw          $a0, 0xB8($a3)
    ctx->pc = 0x161898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x16189c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1618a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1618a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1618a4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1618a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1618a8: 0x8ce30090  lw          $v1, 0x90($a3)
    ctx->pc = 0x1618a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x1618ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1618acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1618b0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1618b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1618b4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1618b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1618b8: 0x8ce40094  lw          $a0, 0x94($a3)
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x1618bc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1618bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1618c0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1618c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1618c4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1618c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1618c8: 0x8ce30098  lw          $v1, 0x98($a3)
    ctx->pc = 0x1618c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x1618cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1618d0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1618d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1618d4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1618d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1618d8: 0x8ce4009c  lw          $a0, 0x9C($a3)
    ctx->pc = 0x1618d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x1618dc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1618dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1618e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1618E0u;
    {
        const bool branch_taken_0x1618e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618E0u;
        // 0x1618e4: 0x481024  and         $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618e0) {
            ctx->pc = 0x161954u;
            goto label_161954;
        }
    }
    ctx->pc = 0x1618E8u;
label_1618e8:
    // 0x1618e8: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x1618e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x1618ec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1618f0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1618f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1618f4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1618f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1618f8: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x1618fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1618fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161900: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x161900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x161904: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161908: 0x8ce400b8  lw          $a0, 0xB8($a3)
    ctx->pc = 0x161908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x16190c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161910: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x161910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x161914: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161918: 0x8ce30090  lw          $v1, 0x90($a3)
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x16191c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161920: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161924: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161928: 0x8ce40094  lw          $a0, 0x94($a3)
    ctx->pc = 0x161928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x16192c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161930: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161934: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161938: 0x8ce30098  lw          $v1, 0x98($a3)
    ctx->pc = 0x161938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x16193c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x161940: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x161944: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x161944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x161948: 0x8ce4009c  lw          $a0, 0x9C($a3)
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x16194c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x161950: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x161950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_161954:
    // 0x161954: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x161954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x161958: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x161958u;
    SET_GPR_U32(ctx, 31, 0x161960u);
    ctx->pc = 0x16195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161958u;
    // 0x16195c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x161958u, 0x161960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161960u;
label_161960:
    // 0x161960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161964: 0x3e00008  jr          $ra
    ctx->pc = 0x161964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161964u;
        // 0x161968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16196Cu;
    // 0x16196c: 0x0  nop
    ctx->pc = 0x16196cu;
    // NOP
    ctx->pc = 0x161970u;
}
