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

// Function: _dispRefImageField
// Address: 0x39b3f0 - 0x39b810
void _dispRefImageField_0x39b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImageField_0x39b3f0");
#endif

    switch (ctx->pc) {
        case 0x39b4c4u: goto label_39b4c4;
        case 0x39b750u: goto label_39b750;
        case 0x39b75cu: goto label_39b75c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7b0u: goto label_39b7b0;
        default: break;
    }

    ctx->pc = 0x39b3f0u;

    // 0x39b3f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x39b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x39b3f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b3f8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x39b3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x39b3fc: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x39b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x39b400: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x39b400u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b404: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x39b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x39b408: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39b408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b40c: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x39b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x39b410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39b410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b414: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x39b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x39b418: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x39b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x39b41c: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x39b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x39b420: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x39b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x39b424: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x39b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x39b428: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x39b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x39b42c: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x39b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x39b430: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B430u;
    {
        const bool branch_taken_0x39b430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B430u;
        // 0x39b434: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b430) {
            ctx->pc = 0x39B44Cu;
            goto label_39b44c;
        }
    }
    ctx->pc = 0x39B438u;
    // 0x39b438: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x39b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x39b43c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x39b43cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b440: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x39b440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39B444u;
    {
        const bool branch_taken_0x39b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B444u;
        // 0x39b448: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b444) {
            ctx->pc = 0x39B454u;
            goto label_39b454;
        }
    }
    ctx->pc = 0x39B44Cu;
label_39b44c:
    // 0x39b44c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x39b44cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b450: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x39b450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39b454:
    // 0x39b454: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x39b454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x39b458: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x39b458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x39b45c: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x39b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x39b460: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x39b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x39b464: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x39b464u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x39b468: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x39b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x39b46c: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x39B46Cu;
    {
        const bool branch_taken_0x39b46c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B46Cu;
        // 0x39b470: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b46c) {
            ctx->pc = 0x39B500u;
            goto label_39b500;
        }
    }
    ctx->pc = 0x39B474u;
    // 0x39b474: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x39b474u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x39b478: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x39B478u;
    {
        const bool branch_taken_0x39b478 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x39b478) {
            ctx->pc = 0x39B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B478u;
            // 0x39b47c: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B510u;
            goto label_39b510;
        }
    }
    ctx->pc = 0x39B480u;
    // 0x39b480: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x39b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x39b484: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x39B484u;
    {
        const bool branch_taken_0x39b484 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b484) {
            ctx->pc = 0x39B488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B484u;
            // 0x39b488: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B510u;
            goto label_39b510;
        }
    }
    ctx->pc = 0x39B48Cu;
    // 0x39b48c: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x39b48cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x39b490: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x39b490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b494: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x39b494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x39b498: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x39b498u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x39b49c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x39b49cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b4a0: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x39b4a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x39b4a4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x39b4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x39b4a8: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x39b4a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x39b4ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39b4b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x39b4b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x39b4b4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x39b4b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x39b4b8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x39b4b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x39b4bc: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x39B4BCu;
    SET_GPR_U32(ctx, 31, 0x39B4C4u);
    ctx->pc = 0x39B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4BCu;
    // 0x39b4c0: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x39B4BCu, 0x39B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4C4u;
label_39b4c4:
    // 0x39b4c4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x39b4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x39b4c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39b4c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39b4cc: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x39b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x39b4d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39b4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39b4d8: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x39b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x39b4dc: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x39b4dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b4e0: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x39b4e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x39b4e4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B4E4u;
    {
        const bool branch_taken_0x39b4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4E4u;
        // 0x39b4e8: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b4e4) {
            ctx->pc = 0x39B50Cu;
            goto label_39b50c;
        }
    }
    ctx->pc = 0x39B4ECu;
    // 0x39b4ec: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b4f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39b4f4: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x39b4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x39b4f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39B4F8u;
    {
        const bool branch_taken_0x39b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4F8u;
        // 0x39b4fc: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b4f8) {
            ctx->pc = 0x39B510u;
            goto label_39b510;
        }
    }
    ctx->pc = 0x39B500u;
label_39b500:
    // 0x39b500: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x39b500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x39b504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39B504u;
    {
        const bool branch_taken_0x39b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B504u;
        // 0x39b508: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b504) {
            ctx->pc = 0x39B510u;
            goto label_39b510;
        }
    }
    ctx->pc = 0x39B50Cu;
label_39b50c:
    // 0x39b50c: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x39b50cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_39b510:
    // 0x39b510: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x39b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x39b514: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b518: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B518u;
    {
        const bool branch_taken_0x39b518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b518) {
            ctx->pc = 0x39B51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B518u;
            // 0x39b51c: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B540u;
            goto label_39b540;
        }
    }
    ctx->pc = 0x39B520u;
    // 0x39b520: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x39b520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x39b524: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B524u;
    {
        const bool branch_taken_0x39b524 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b524) {
            ctx->pc = 0x39B528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B524u;
            // 0x39b528: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B540u;
            goto label_39b540;
        }
    }
    ctx->pc = 0x39B52Cu;
    // 0x39b52c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x39b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x39b530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39b534: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x39b534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x39b538: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x39b538u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x39b53c: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x39b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_39b540:
    // 0x39b540: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x39b540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b544: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x39b544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x39b548: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x39b548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x39b54c: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x39b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x39b550: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x39b550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x39b554: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x39b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x39b558: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x39b558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x39b55c: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x39b55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x39b560: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x39b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x39b564: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x39b564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x39b568: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x39b568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x39b56c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39b56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39b570: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x39b570u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x39b574: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x39b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x39b578: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x39b578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x39b57c: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x39b57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x39b580: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x39b580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x39b584: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x39b584u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x39b588: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x39b588u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x39b58c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x39b58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39b590: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x39b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x39b594: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x39b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x39b598: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x39b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39b59c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x39b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x39b5a0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x39b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x39b5a4: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x39b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x39b5a8: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x39B5A8u;
    {
        const bool branch_taken_0x39b5a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5A8u;
        // 0x39b5ac: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5a8) {
            ctx->pc = 0x39B60Cu;
            goto label_39b60c;
        }
    }
    ctx->pc = 0x39B5B0u;
    // 0x39b5b0: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x39b5b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x39b5b4: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39B5B4u;
    {
        const bool branch_taken_0x39b5b4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x39b5b4) {
            ctx->pc = 0x39B5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B5B4u;
            // 0x39b5b8: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B614u;
            goto label_39b614;
        }
    }
    ctx->pc = 0x39B5BCu;
    // 0x39b5bc: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x39B5BCu;
    {
        const bool branch_taken_0x39b5bc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x39b5bc) {
            ctx->pc = 0x39B5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B5BCu;
            // 0x39b5c0: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B614u;
            goto label_39b614;
        }
    }
    ctx->pc = 0x39B5C4u;
    // 0x39b5c4: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x39b5c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b5c8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b5cc: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x39b5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39b5d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39b5d4: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x39b5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x39b5d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x39b5d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x39b5dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x39b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x39b5e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39b5e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39b5e8: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x39b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x39b5ec: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x39b5ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b5f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39b5f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39B5F4u;
    {
        const bool branch_taken_0x39b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5F4u;
        // 0x39b5f8: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5f4) {
            ctx->pc = 0x39B614u;
            goto label_39b614;
        }
    }
    ctx->pc = 0x39B5FCu;
    // 0x39b5fc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39b604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39B604u;
    {
        const bool branch_taken_0x39b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B604u;
        // 0x39b608: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b604) {
            ctx->pc = 0x39B614u;
            goto label_39b614;
        }
    }
    ctx->pc = 0x39B60Cu;
label_39b60c:
    // 0x39b60c: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x39b60cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x39b610: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x39b610u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_39b614:
    // 0x39b614: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x39b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x39b618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b61c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B61Cu;
    {
        const bool branch_taken_0x39b61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b61c) {
            ctx->pc = 0x39B620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B61Cu;
            // 0x39b620: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B644u;
            goto label_39b644;
        }
    }
    ctx->pc = 0x39B624u;
    // 0x39b624: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x39b624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x39b628: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B628u;
    {
        const bool branch_taken_0x39b628 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b628) {
            ctx->pc = 0x39B62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B628u;
            // 0x39b62c: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B644u;
            goto label_39b644;
        }
    }
    ctx->pc = 0x39B630u;
    // 0x39b630: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x39b630u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x39b634: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39b638: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x39b638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x39b63c: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x39b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x39b640: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x39b640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_39b644:
    // 0x39b644: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39b644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b648: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x39b648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x39b64c: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x39b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x39b650: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x39b650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x39b654: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x39b654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x39b658: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x39b658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x39b65c: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x39b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x39b660: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x39b660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x39b664: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x39b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x39b668: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x39b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x39b66c: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x39b66cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x39b670: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x39b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39b674: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x39b674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x39b678: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x39b678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x39b67c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x39b67cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x39b680: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39b680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39b684: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x39b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x39b688: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x39b688u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x39b68c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x39b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39b690: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x39b690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x39b694: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x39b694u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x39b698: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x39b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x39b69c: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x39b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x39b6a0: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x39b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x39b6a4: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x39b6a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x39b6a8: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x39b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x39b6ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x39b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x39b6b0: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x39b6b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x39b6b4: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x39b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x39b6b8: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x39b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x39b6bc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x39b6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x39b6c0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x39b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x39b6c4: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x39b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x39b6c8: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x39b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x39b6cc: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x39b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x39b6d0: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x39b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x39b6d4: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x39b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x39b6d8: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x39b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x39b6dc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x39b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x39b6e0: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x39b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x39b6e4: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x39b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x39b6e8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x39B6E8u;
    {
        const bool branch_taken_0x39b6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6E8u;
        // 0x39b6ec: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b6e8) {
            ctx->pc = 0x39B714u;
            goto label_39b714;
        }
    }
    ctx->pc = 0x39B6F0u;
    // 0x39b6f0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x39b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x39b6f4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x39b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x39b6f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39b6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b6fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39B6FCu;
    {
        const bool branch_taken_0x39b6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6FCu;
        // 0x39b700: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b6fc) {
            ctx->pc = 0x39B72Cu;
            goto label_39b72c;
        }
    }
    ctx->pc = 0x39B704u;
    // 0x39b704: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x39b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x39b708: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x39b708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39b70c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39B70Cu;
    {
        const bool branch_taken_0x39b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B70Cu;
        // 0x39b710: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b70c) {
            ctx->pc = 0x39B72Cu;
            goto label_39b72c;
        }
    }
    ctx->pc = 0x39B714u;
label_39b714:
    // 0x39b714: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x39b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x39b718: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x39b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x39b71c: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x39b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x39b720: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x39b720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39b724: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39b724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b728: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x39b728u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39b72c:
    // 0x39b72c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x39B72Cu;
    {
        const bool branch_taken_0x39b72c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b72c) {
            ctx->pc = 0x39B730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B72Cu;
            // 0x39b730: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B768u;
            goto label_39b768;
        }
    }
    ctx->pc = 0x39B734u;
    // 0x39b734: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x39b734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x39b738: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x39b738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x39b73c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x39b73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x39b740: 0x24c6e5a8  addiu       $a2, $a2, -0x1A58
    ctx->pc = 0x39b740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960552));
    // 0x39b744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39b744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b748: 0xc0ec7b8  jal         func_3B1EE0
    ctx->pc = 0x39B748u;
    SET_GPR_U32(ctx, 31, 0x39B750u);
    ctx->pc = 0x39B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B748u;
    // 0x39b74c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1EE0u, 0x39B748u, 0x39B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B750u;
label_39b750:
    // 0x39b750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b754: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39B754u;
    SET_GPR_U32(ctx, 31, 0x39B75Cu);
    ctx->pc = 0x39B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B754u;
    // 0x39b758: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39B754u, 0x39B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B75Cu;
label_39b75c:
    // 0x39b75c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x39B75Cu;
    {
        const bool branch_taken_0x39b75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B75Cu;
        // 0x39b760: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b75c) {
            ctx->pc = 0x39B7E4u;
            goto label_39b7e4;
        }
    }
    ctx->pc = 0x39B764u;
    // 0x39b764: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x39b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_39b768:
    // 0x39b768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b76c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x39B76Cu;
    {
        const bool branch_taken_0x39b76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B76Cu;
        // 0x39b770: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b76c) {
            ctx->pc = 0x39B7E4u;
            goto label_39b7e4;
        }
    }
    ctx->pc = 0x39B774u;
    // 0x39b774: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x39b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x39b778: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x39B778u;
    {
        const bool branch_taken_0x39b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b778) {
            ctx->pc = 0x39B77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B778u;
            // 0x39b77c: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B7E8u;
            goto label_39b7e8;
        }
    }
    ctx->pc = 0x39B780u;
    // 0x39b780: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x39b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x39b784: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39b784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39b788: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x39b788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x39b78c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x39b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x39b790: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B790u;
    {
        const bool branch_taken_0x39b790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B790u;
        // 0x39b794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b790) {
            ctx->pc = 0x39B7A8u;
            goto label_39b7a8;
        }
    }
    ctx->pc = 0x39B798u;
    // 0x39b798: 0xc0e6ec8  jal         func_39BB20
    ctx->pc = 0x39B798u;
    SET_GPR_U32(ctx, 31, 0x39B7A0u);
    ctx->pc = 0x39B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B798u;
    // 0x39b79c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB20u, 0x39B798u, 0x39B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7A0u;
label_39b7a0:
    // 0x39b7a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39B7A0u;
    {
        const bool branch_taken_0x39b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7A0u;
        // 0x39b7a4: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7a0) {
            ctx->pc = 0x39B7B4u;
            goto label_39b7b4;
        }
    }
    ctx->pc = 0x39B7A8u;
label_39b7a8:
    // 0x39b7a8: 0xc0e6ba8  jal         func_39AEA0
    ctx->pc = 0x39B7A8u;
    SET_GPR_U32(ctx, 31, 0x39B7B0u);
    ctx->pc = 0x39B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B7A8u;
    // 0x39b7ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AEA0u, 0x39B7A8u, 0x39B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7B0u;
label_39b7b0:
    // 0x39b7b0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x39b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_39b7b4:
    // 0x39b7b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b7b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39b7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39b7bc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x39b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x39b7c0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x39b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39b7c4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B7C4u;
    {
        const bool branch_taken_0x39b7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x39B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7C4u;
        // 0x39b7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7c4) {
            ctx->pc = 0x39B7DCu;
            goto label_39b7dc;
        }
    }
    ctx->pc = 0x39B7CCu;
    // 0x39b7cc: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x39b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x39b7d0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x39b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x39b7d4: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x39b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x39b7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b7dc:
    // 0x39b7dc: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x39b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x39b7e0: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x39b7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_39b7e4:
    // 0x39b7e4: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x39b7e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_39b7e8:
    // 0x39b7e8: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x39b7e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x39b7ec: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x39b7ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x39b7f0: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x39b7f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x39b7f4: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x39b7f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x39b7f8: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x39b7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x39b7fc: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x39b7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x39b800: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x39b800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x39b804: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x39b804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39b808: 0x3e00008  jr          $ra
    ctx->pc = 0x39B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B808u;
        // 0x39b80c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B810u;
}
