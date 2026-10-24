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

// Function: func_001E33B0
// Address: 0x1e33b0 - 0x1e3630
void func_001E33B0_0x1e33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E33B0_0x1e33b0");
#endif

    switch (ctx->pc) {
        case 0x1e35bcu: goto label_1e35bc;
        case 0x1e35f0u: goto label_1e35f0;
        case 0x1e3620u: goto label_1e3620;
        default: break;
    }

    ctx->pc = 0x1e33b0u;

    // 0x1e33b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e33b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e33b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e33bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e33bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e33c4: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e33c8: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x1e33c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e33cc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1e33ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1e33d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1e33d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e33d4: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x1e33d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x1e33d8: 0xdc4501b0  ld          $a1, 0x1B0($v0)
    ctx->pc = 0x1e33d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1e33dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1e33dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1e33e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E33E0u;
    {
        const bool branch_taken_0x1e33e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33E0u;
        // 0x1e33e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33e0) {
            ctx->pc = 0x1E3408u;
            goto label_1e3408;
        }
    }
    ctx->pc = 0x1E33E8u;
    // 0x1e33e8: 0x96020b50  lhu         $v0, 0xB50($s0)
    ctx->pc = 0x1e33e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2896)));
    // 0x1e33ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e33f0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e33f4: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E33F4u;
    {
        const bool branch_taken_0x1e33f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F4u;
        // 0x1e33f8: 0xa6020b50  sh          $v0, 0xB50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2896), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33f4) {
            ctx->pc = 0x1E3444u;
            goto label_1e3444;
        }
    }
    ctx->pc = 0x1E33FCu;
    // 0x1e33fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3400: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3400u;
    {
        const bool branch_taken_0x1e3400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3400u;
        // 0x1e3404: 0xa6020b50  sh          $v0, 0xB50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2896), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3400) {
            ctx->pc = 0x1E3444u;
            goto label_1e3444;
        }
    }
    ctx->pc = 0x1E3408u;
label_1e3408:
    // 0x1e3408: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e340c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1e340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1e3410: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3414: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1e3418: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1e3418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e341c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E341Cu;
    {
        const bool branch_taken_0x1e341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e341c) {
            ctx->pc = 0x1E3420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E341Cu;
            // 0x1e3420: 0x86030b50  lh          $v1, 0xB50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3448u;
            goto label_1e3448;
        }
    }
    ctx->pc = 0x1E3424u;
    // 0x1e3424: 0x96020b50  lhu         $v0, 0xB50($s0)
    ctx->pc = 0x1e3424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2896)));
    // 0x1e3428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e342c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e342cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e3430: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1e3430u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1e3434: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1e3434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e3438: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3438u;
    {
        const bool branch_taken_0x1e3438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3438u;
        // 0x1e343c: 0xa6020b50  sh          $v0, 0xB50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2896), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3438) {
            ctx->pc = 0x1E3444u;
            goto label_1e3444;
        }
    }
    ctx->pc = 0x1E3440u;
    // 0x1e3440: 0xa6000b50  sh          $zero, 0xB50($s0)
    ctx->pc = 0x1e3440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2896), (uint16_t)GPR_U32(ctx, 0));
label_1e3444:
    // 0x1e3444: 0x86030b50  lh          $v1, 0xB50($s0)
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2896)));
label_1e3448:
    // 0x1e3448: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3448u;
    {
        const bool branch_taken_0x1e3448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3448u;
        // 0x1e344c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3448) {
            ctx->pc = 0x1E3460u;
            goto label_1e3460;
        }
    }
    ctx->pc = 0x1E3450u;
    // 0x1e3450: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E3450u;
    {
        const bool branch_taken_0x1e3450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3450u;
        // 0x1e3454: 0x24c374a0  addiu       $v1, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3450) {
            ctx->pc = 0x1E34B0u;
            goto label_1e34b0;
        }
    }
    ctx->pc = 0x1E3458u;
    // 0x1e3458: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E3458u;
    {
        const bool branch_taken_0x1e3458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3458u;
        // 0x1e345c: 0x9e020054  lwu         $v0, 0x54($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3458) {
            ctx->pc = 0x1E3530u;
            goto label_1e3530;
        }
    }
    ctx->pc = 0x1E3460u;
label_1e3460:
    // 0x1e3460: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x1e3460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1e3464: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1e3464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1e3468: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1e3468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1e346c: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1e346cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1e3470: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x1e3470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x1e3474: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1e3474u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1e3478: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e3478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e347c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E347Cu;
    {
        const bool branch_taken_0x1e347c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E347Cu;
        // 0x1e3480: 0x9e020054  lwu         $v0, 0x54($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e347c) {
            ctx->pc = 0x1E3530u;
            goto label_1e3530;
        }
    }
    ctx->pc = 0x1E3484u;
    // 0x1e3484: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1e3484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x1e3488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e348c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E348Cu;
    {
        const bool branch_taken_0x1e348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E348Cu;
        // 0x1e3490: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e348c) {
            ctx->pc = 0x1E34A4u;
            goto label_1e34a4;
        }
    }
    ctx->pc = 0x1E3494u;
    // 0x1e3494: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1e3498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e3498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e349c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E349Cu;
    {
        const bool branch_taken_0x1e349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E349Cu;
        // 0x1e34a0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e349c) {
            ctx->pc = 0x1E352Cu;
            goto label_1e352c;
        }
    }
    ctx->pc = 0x1E34A4u;
label_1e34a4:
    // 0x1e34a4: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1e34a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1e34a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E34A8u;
    {
        const bool branch_taken_0x1e34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34A8u;
        // 0x1e34ac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34a8) {
            ctx->pc = 0x1E352Cu;
            goto label_1e352c;
        }
    }
    ctx->pc = 0x1E34B0u;
label_1e34b0:
    // 0x1e34b0: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e34b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e34b4: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1e34b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1e34b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e34bc: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1e34bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1e34c0: 0xdc6301b0  ld          $v1, 0x1B0($v1)
    ctx->pc = 0x1e34c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e34c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e34c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e34c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E34C8u;
    {
        const bool branch_taken_0x1e34c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e34c8) {
            ctx->pc = 0x1E34F0u;
            goto label_1e34f0;
        }
    }
    ctx->pc = 0x1E34D0u;
    // 0x1e34d0: 0x96020b52  lhu         $v0, 0xB52($s0)
    ctx->pc = 0x1e34d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2898)));
    // 0x1e34d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e34d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e34dc: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E34DCu;
    {
        const bool branch_taken_0x1e34dc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34DCu;
        // 0x1e34e0: 0xa6020b52  sh          $v0, 0xB52($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2898), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34dc) {
            ctx->pc = 0x1E352Cu;
            goto label_1e352c;
        }
    }
    ctx->pc = 0x1E34E4u;
    // 0x1e34e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e34e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E34E8u;
    {
        const bool branch_taken_0x1e34e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34E8u;
        // 0x1e34ec: 0xa6020b52  sh          $v0, 0xB52($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2898), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34e8) {
            ctx->pc = 0x1E352Cu;
            goto label_1e352c;
        }
    }
    ctx->pc = 0x1E34F0u;
label_1e34f0:
    // 0x1e34f0: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e34f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e34f4: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1e34f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1e34f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e34f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e34fc: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1e34fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1e3500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e3504: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E3504u;
    {
        const bool branch_taken_0x1e3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3504) {
            ctx->pc = 0x1E3508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3504u;
            // 0x1e3508: 0x9e020054  lwu         $v0, 0x54($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3530u;
            goto label_1e3530;
        }
    }
    ctx->pc = 0x1E350Cu;
    // 0x1e350c: 0x96020b52  lhu         $v0, 0xB52($s0)
    ctx->pc = 0x1e350cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2898)));
    // 0x1e3510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3514: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1e3514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e3518: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1e351c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1e351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e3520: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3520u;
    {
        const bool branch_taken_0x1e3520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3520u;
        // 0x1e3524: 0xa6020b52  sh          $v0, 0xB52($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2898), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3520) {
            ctx->pc = 0x1E352Cu;
            goto label_1e352c;
        }
    }
    ctx->pc = 0x1E3528u;
    // 0x1e3528: 0xa6000b52  sh          $zero, 0xB52($s0)
    ctx->pc = 0x1e3528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2898), (uint16_t)GPR_U32(ctx, 0));
label_1e352c:
    // 0x1e352c: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1e352cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1e3530:
    // 0x1e3530: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e3530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e3534: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e3534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e3538: 0x246ab860  addiu       $t2, $v1, -0x47A0
    ctx->pc = 0x1e3538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948960));
    // 0x1e353c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1e353cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x1e3540: 0x2487b840  addiu       $a3, $a0, -0x47C0
    ctx->pc = 0x1e3540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
    // 0x1e3544: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1e3544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e3548: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1e3548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e354c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1e354cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e3550: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1e3550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e3554: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1e3554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e3558: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1e3558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e355c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1e355cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3560: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1e3560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3564: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1e3564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3568: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1e3568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e356c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1e356cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3570: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1e3570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3574: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x1e3574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e3578: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x1e3578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e357c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1e357cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3580: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1e3580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e3588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3588u;
    {
        const bool branch_taken_0x1e3588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3588u;
        // 0x1e358c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3588) {
            ctx->pc = 0x1E3598u;
            goto label_1e3598;
        }
    }
    ctx->pc = 0x1E3590u;
    // 0x1e3590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3590u;
    {
        const bool branch_taken_0x1e3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3590u;
        // 0x1e3594: 0x244bb870  addiu       $t3, $v0, -0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3590) {
            ctx->pc = 0x1E35A0u;
            goto label_1e35a0;
        }
    }
    ctx->pc = 0x1E3598u;
label_1e3598:
    // 0x1e3598: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e359c: 0x244bb7f0  addiu       $t3, $v0, -0x4810
    ctx->pc = 0x1e359cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
label_1e35a0:
    // 0x1e35a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e35a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e35a8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e35a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e35ac: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1e35acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e35b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e35b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35b4: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x1E35B4u;
    SET_GPR_U32(ctx, 31, 0x1E35BCu);
    ctx->pc = 0x1E35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35B4u;
    // 0x1e35b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1E35B4u, 0x1E35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35BCu;
label_1e35bc:
    // 0x1e35bc: 0x86020b52  lh          $v0, 0xB52($s0)
    ctx->pc = 0x1e35bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2898)));
    // 0x1e35c0: 0x3c0a0043  lui         $t2, 0x43
    ctx->pc = 0x1e35c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)67 << 16));
    // 0x1e35c4: 0x254ab878  addiu       $t2, $t2, -0x4788
    ctx->pc = 0x1e35c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948984));
    // 0x1e35c8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1e35c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e35cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e35d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e35d4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1e35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1e35d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e35dc: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x1e35dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e35e0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e35e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e35e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e35e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35e8: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x1E35E8u;
    SET_GPR_U32(ctx, 31, 0x1E35F0u);
    ctx->pc = 0x1E35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35E8u;
    // 0x1e35ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1E35E8u, 0x1E35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35F0u;
label_1e35f0:
    // 0x1e35f0: 0x86070b50  lh          $a3, 0xB50($s0)
    ctx->pc = 0x1e35f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2896)));
    // 0x1e35f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e35f8: 0x3c0a0043  lui         $t2, 0x43
    ctx->pc = 0x1e35f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)67 << 16));
    // 0x1e35fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e3600: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1e3600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1e3604: 0x254ab888  addiu       $t2, $t2, -0x4778
    ctx->pc = 0x1e3604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949000));
    // 0x1e3608: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e3608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e360c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e360cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e3610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3618: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x1E3618u;
    SET_GPR_U32(ctx, 31, 0x1E3620u);
    ctx->pc = 0x1E361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3618u;
    // 0x1e361c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1E3618u, 0x1E3620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3620u;
label_1e3620:
    // 0x1e3620: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e3620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3628: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3628u;
        // 0x1e362c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3630u;
}
