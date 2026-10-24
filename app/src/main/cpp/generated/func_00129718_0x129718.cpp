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

// Function: func_00129718
// Address: 0x129718 - 0x1299f0
void func_00129718_0x129718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129718_0x129718");
#endif

    switch (ctx->pc) {
        case 0x129994u: goto label_129994;
        case 0x1299b0u: goto label_1299b0;
        case 0x1299c4u: goto label_1299c4;
        case 0x1299d0u: goto label_1299d0;
        default: break;
    }

    ctx->pc = 0x129718u;

    // 0x129718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12971c: 0x2cc2002a  sltiu       $v0, $a2, 0x2A
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x129720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x129720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x129724: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x129724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x129728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12972c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x129730: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x129730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129734: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x129734u;
    {
        const bool branch_taken_0x129734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129734u;
        // 0x129738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129734) {
            ctx->pc = 0x1299D4u;
            goto label_1299d4;
        }
    }
    ctx->pc = 0x12973Cu;
    // 0x12973c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x129740: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x129740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x129744: 0x2442ce10  addiu       $v0, $v0, -0x31F0
    ctx->pc = 0x129744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x129748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12974c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129750: 0x800008  jr          $a0
    ctx->pc = 0x129750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129758u: goto label_129758;
            case 0x129764u: goto label_129764;
            case 0x129770u: goto label_129770;
            case 0x12977Cu: goto label_12977c;
            case 0x129788u: goto label_129788;
            case 0x129794u: goto label_129794;
            case 0x1297A0u: goto label_1297a0;
            case 0x1297ACu: goto label_1297ac;
            case 0x1297B8u: goto label_1297b8;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297D0u: goto label_1297d0;
            case 0x1297DCu: goto label_1297dc;
            case 0x1297E8u: goto label_1297e8;
            case 0x1297F4u: goto label_1297f4;
            case 0x129800u: goto label_129800;
            case 0x12980Cu: goto label_12980c;
            case 0x129818u: goto label_129818;
            case 0x129824u: goto label_129824;
            case 0x129830u: goto label_129830;
            case 0x12983Cu: goto label_12983c;
            case 0x129848u: goto label_129848;
            case 0x129854u: goto label_129854;
            case 0x129860u: goto label_129860;
            case 0x12986Cu: goto label_12986c;
            case 0x129878u: goto label_129878;
            case 0x129884u: goto label_129884;
            case 0x129890u: goto label_129890;
            case 0x12989Cu: goto label_12989c;
            case 0x1298A8u: goto label_1298a8;
            case 0x1298B8u: goto label_1298b8;
            case 0x1298C8u: goto label_1298c8;
            case 0x1298D8u: goto label_1298d8;
            case 0x1298E8u: goto label_1298e8;
            case 0x1298F8u: goto label_1298f8;
            case 0x129908u: goto label_129908;
            case 0x129918u: goto label_129918;
            case 0x129928u: goto label_129928;
            case 0x129938u: goto label_129938;
            case 0x129948u: goto label_129948;
            case 0x129958u: goto label_129958;
            case 0x129968u: goto label_129968;
            case 0x129974u: goto label_129974;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129750u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x129758u;
label_129758:
    // 0x129758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12975c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x12975Cu;
    {
        const bool branch_taken_0x12975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12975Cu;
        // 0x129760: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12975c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129764u;
label_129764:
    // 0x129764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129768: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x129768u;
    {
        const bool branch_taken_0x129768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129768u;
        // 0x12976c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129768) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129770u;
label_129770:
    // 0x129770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129774: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x129774u;
    {
        const bool branch_taken_0x129774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129774u;
        // 0x129778: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129774) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x12977Cu;
label_12977c:
    // 0x12977c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129780: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x129780u;
    {
        const bool branch_taken_0x129780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129780u;
        // 0x129784: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129780) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129788u;
label_129788:
    // 0x129788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12978c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12978Cu;
    {
        const bool branch_taken_0x12978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12978Cu;
        // 0x129790: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12978c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129794u;
label_129794:
    // 0x129794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129798: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x129798u;
    {
        const bool branch_taken_0x129798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129798u;
        // 0x12979c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129798) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297A0u;
label_1297a0:
    // 0x1297a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297a4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1297A4u;
    {
        const bool branch_taken_0x1297a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297A4u;
        // 0x1297a8: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297a4) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297ACu;
label_1297ac:
    // 0x1297ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297b0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1297B0u;
    {
        const bool branch_taken_0x1297b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297B0u;
        // 0x1297b4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297b0) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297B8u;
label_1297b8:
    // 0x1297b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297bc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1297BCu;
    {
        const bool branch_taken_0x1297bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297BCu;
        // 0x1297c0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297bc) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297C4u;
label_1297c4:
    // 0x1297c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297c8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1297C8u;
    {
        const bool branch_taken_0x1297c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297C8u;
        // 0x1297cc: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297c8) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297D0u;
label_1297d0:
    // 0x1297d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297d4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1297D4u;
    {
        const bool branch_taken_0x1297d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297D4u;
        // 0x1297d8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297d4) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297DCu;
label_1297dc:
    // 0x1297dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1297E0u;
    {
        const bool branch_taken_0x1297e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297E0u;
        // 0x1297e4: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297e0) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297E8u;
label_1297e8:
    // 0x1297e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297ec: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1297ECu;
    {
        const bool branch_taken_0x1297ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297ECu;
        // 0x1297f0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297ec) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1297F4u;
label_1297f4:
    // 0x1297f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297f8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1297F8u;
    {
        const bool branch_taken_0x1297f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297F8u;
        // 0x1297fc: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297f8) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129800u;
label_129800:
    // 0x129800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129804: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x129804u;
    {
        const bool branch_taken_0x129804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129804u;
        // 0x129808: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129804) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x12980Cu;
label_12980c:
    // 0x12980c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129810: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x129810u;
    {
        const bool branch_taken_0x129810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129810u;
        // 0x129814: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129810) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129818u;
label_129818:
    // 0x129818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12981c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12981Cu;
    {
        const bool branch_taken_0x12981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12981Cu;
        // 0x129820: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12981c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129824u;
label_129824:
    // 0x129824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129828: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x129828u;
    {
        const bool branch_taken_0x129828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129828u;
        // 0x12982c: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129828) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129830u;
label_129830:
    // 0x129830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129834: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x129834u;
    {
        const bool branch_taken_0x129834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129834u;
        // 0x129838: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129834) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x12983Cu;
label_12983c:
    // 0x12983c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129840: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x129840u;
    {
        const bool branch_taken_0x129840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129840u;
        // 0x129844: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129840) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129848u;
label_129848:
    // 0x129848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12984c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12984Cu;
    {
        const bool branch_taken_0x12984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12984Cu;
        // 0x129850: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12984c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129854u;
label_129854:
    // 0x129854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129858: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x129858u;
    {
        const bool branch_taken_0x129858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129858u;
        // 0x12985c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129858) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129860u;
label_129860:
    // 0x129860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129864: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x129864u;
    {
        const bool branch_taken_0x129864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129864u;
        // 0x129868: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129864) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x12986Cu;
label_12986c:
    // 0x12986c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129870: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x129870u;
    {
        const bool branch_taken_0x129870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129870u;
        // 0x129874: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129870) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129878u;
label_129878:
    // 0x129878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12987c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12987Cu;
    {
        const bool branch_taken_0x12987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12987Cu;
        // 0x129880: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12987c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129884u;
label_129884:
    // 0x129884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129888: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x129888u;
    {
        const bool branch_taken_0x129888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129888u;
        // 0x12988c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129888) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129890u;
label_129890:
    // 0x129890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129894: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129894u;
        // 0x129898: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129894) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1298a0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1298A0u;
    {
        const bool branch_taken_0x1298a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298A0u;
        // 0x1298a4: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298a0) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x1298A8u;
label_1298a8:
    // 0x1298a8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1298ac: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1298b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1298B0u;
    {
        const bool branch_taken_0x1298b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298B0u;
        // 0x1298b4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298b0) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x1298B8u;
label_1298b8:
    // 0x1298b8: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1298bc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1298c0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1298C0u;
    {
        const bool branch_taken_0x1298c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298C0u;
        // 0x1298c4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298c0) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x1298C8u;
label_1298c8:
    // 0x1298c8: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1298cc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1298d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1298D0u;
    {
        const bool branch_taken_0x1298d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298D0u;
        // 0x1298d4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298d0) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x1298D8u;
label_1298d8:
    // 0x1298d8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1298d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1298dc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1298e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1298E0u;
    {
        const bool branch_taken_0x1298e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298E0u;
        // 0x1298e4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298e0) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x1298E8u;
label_1298e8:
    // 0x1298e8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1298e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1298ec: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1298f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1298F0u;
    {
        const bool branch_taken_0x1298f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298F0u;
        // 0x1298f4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298f0) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x1298F8u;
label_1298f8:
    // 0x1298f8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1298f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1298fc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1298fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129900: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x129900u;
    {
        const bool branch_taken_0x129900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129900u;
        // 0x129904: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129900) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129908u;
label_129908:
    // 0x129908: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x129908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x12990c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12990cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129910: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x129910u;
    {
        const bool branch_taken_0x129910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129910u;
        // 0x129914: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129910) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129918u;
label_129918:
    // 0x129918: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x129918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12991c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12991cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129920: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x129920u;
    {
        const bool branch_taken_0x129920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129920u;
        // 0x129924: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129920) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129928u;
label_129928:
    // 0x129928: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x129928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12992c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12992cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129930: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x129930u;
    {
        const bool branch_taken_0x129930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129930u;
        // 0x129934: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129930) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129938u;
label_129938:
    // 0x129938: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12993c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12993cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129940: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x129940u;
    {
        const bool branch_taken_0x129940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129940u;
        // 0x129944: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129940) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129948u;
label_129948:
    // 0x129948: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x129948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12994c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12994cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129950: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x129950u;
    {
        const bool branch_taken_0x129950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129950u;
        // 0x129954: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129950) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129958u;
label_129958:
    // 0x129958: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x129958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12995c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12995cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x129960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x129960u;
    {
        const bool branch_taken_0x129960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129960u;
        // 0x129964: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129960) {
            ctx->pc = 0x129984u;
            goto label_129984;
        }
    }
    ctx->pc = 0x129968u;
label_129968:
    // 0x129968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12996c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12996Cu;
    {
        const bool branch_taken_0x12996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12996Cu;
        // 0x129970: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12996c) {
            ctx->pc = 0x12997Cu;
            goto label_12997c;
        }
    }
    ctx->pc = 0x129974u;
label_129974:
    // 0x129974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129978: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x129978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12997c:
    // 0x12997c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x12997cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x129980: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x129980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_129984:
    // 0x129984: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x129984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x129988: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x129988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12998c: 0xc0499dc  jal         func_126770
    ctx->pc = 0x12998Cu;
    SET_GPR_U32(ctx, 31, 0x129994u);
    ctx->pc = 0x129990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12998Cu;
    // 0x129990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x12998Cu, 0x129994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129994u;
label_129994:
    // 0x129994: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x129994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x129998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12999c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1299a0: 0x8e251620  lw          $a1, 0x1620($s1)
    ctx->pc = 0x1299a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
    // 0x1299a4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1299a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1299a8: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1299A8u;
    SET_GPR_U32(ctx, 31, 0x1299B0u);
    ctx->pc = 0x1299ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1299A8u;
    // 0x1299ac: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1299A8u, 0x1299B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299B0u;
label_1299b0:
    // 0x1299b0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1299b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1299b4: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x1299b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
    // 0x1299b8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1299b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1299bc: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1299BCu;
    SET_GPR_U32(ctx, 31, 0x1299C4u);
    ctx->pc = 0x1299C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1299BCu;
    // 0x1299c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1299BCu, 0x1299C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299C4u;
label_1299c4:
    // 0x1299c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1299c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299c8: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1299C8u;
    SET_GPR_U32(ctx, 31, 0x1299D0u);
    ctx->pc = 0x1299CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1299C8u;
    // 0x1299cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1299C8u, 0x1299D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299D0u;
label_1299d0:
    // 0x1299d0: 0xae320694  sw          $s2, 0x694($s1)
    ctx->pc = 0x1299d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 18));
label_1299d4:
    // 0x1299d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1299d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1299d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1299d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1299dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1299dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1299e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1299e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1299e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1299E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1299E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299E4u;
        // 0x1299e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1299ECu;
    // 0x1299ec: 0x0  nop
    ctx->pc = 0x1299ecu;
    // NOP
    ctx->pc = 0x1299f0u;
}
