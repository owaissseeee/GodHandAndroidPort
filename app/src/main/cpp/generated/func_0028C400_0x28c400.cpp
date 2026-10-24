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

// Function: func_0028C400
// Address: 0x28c400 - 0x28cb90
void func_0028C400_0x28c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028C400_0x28c400");
#endif

    switch (ctx->pc) {
        case 0x28c70cu: goto label_28c70c;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c8ccu: goto label_28c8cc;
        case 0x28c90cu: goto label_28c90c;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c9ccu: goto label_28c9cc;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28caccu: goto label_28cacc;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb78u: goto label_28cb78;
        default: break;
    }

    ctx->pc = 0x28c400u;

    // 0x28c400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c404: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28c404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28c408: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28c40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c410: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28c414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c418: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28c41c: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
    // 0x28c420: 0x2c8300fc  sltiu       $v1, $a0, 0xFC
    ctx->pc = 0x28c420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)252) ? 1 : 0);
    // 0x28c424: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C424u;
    {
        const bool branch_taken_0x28c424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C424u;
        // 0x28c428: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c424) {
            ctx->pc = 0x28C444u;
            goto label_28c444;
        }
    }
    ctx->pc = 0x28C42Cu;
    // 0x28c42c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28c430: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x28c434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c43c: 0x800008  jr          $a0
    ctx->pc = 0x28C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C444u: goto label_28c444;
            case 0x28C454u: goto label_28c454;
            case 0x28C464u: goto label_28c464;
            case 0x28C474u: goto label_28c474;
            case 0x28C484u: goto label_28c484;
            case 0x28C494u: goto label_28c494;
            case 0x28C4A4u: goto label_28c4a4;
            case 0x28C4B4u: goto label_28c4b4;
            case 0x28C4C4u: goto label_28c4c4;
            case 0x28C4D4u: goto label_28c4d4;
            case 0x28C4E4u: goto label_28c4e4;
            case 0x28C4F4u: goto label_28c4f4;
            case 0x28C504u: goto label_28c504;
            case 0x28C514u: goto label_28c514;
            case 0x28C524u: goto label_28c524;
            case 0x28C534u: goto label_28c534;
            case 0x28C544u: goto label_28c544;
            case 0x28C554u: goto label_28c554;
            case 0x28C564u: goto label_28c564;
            case 0x28C574u: goto label_28c574;
            case 0x28C584u: goto label_28c584;
            case 0x28C594u: goto label_28c594;
            case 0x28C5A4u: goto label_28c5a4;
            case 0x28C5B4u: goto label_28c5b4;
            case 0x28C5C4u: goto label_28c5c4;
            case 0x28C5D4u: goto label_28c5d4;
            case 0x28C5E4u: goto label_28c5e4;
            case 0x28C5F4u: goto label_28c5f4;
            case 0x28C604u: goto label_28c604;
            case 0x28C614u: goto label_28c614;
            case 0x28C624u: goto label_28c624;
            case 0x28C634u: goto label_28c634;
            case 0x28C644u: goto label_28c644;
            case 0x28C654u: goto label_28c654;
            case 0x28C664u: goto label_28c664;
            case 0x28C674u: goto label_28c674;
            case 0x28C684u: goto label_28c684;
            case 0x28C694u: goto label_28c694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C43Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28C444u;
label_28c444:
    // 0x28c444: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c448: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x28c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x28c44c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x28C44Cu;
    {
        const bool branch_taken_0x28c44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C44Cu;
        // 0x28c450: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c44c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C454u;
label_28c454:
    // 0x28c454: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c458: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x28c45c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x28C45Cu;
    {
        const bool branch_taken_0x28c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C45Cu;
        // 0x28c460: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c45c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C464u;
label_28c464:
    // 0x28c464: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c468: 0x8c4301a0  lw          $v1, 0x1A0($v0)
    ctx->pc = 0x28c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x28c46c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x28C46Cu;
    {
        const bool branch_taken_0x28c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C46Cu;
        // 0x28c470: 0x8c44019c  lw          $a0, 0x19C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c46c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C474u;
label_28c474:
    // 0x28c474: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c478: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x28c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x28c47c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x28C47Cu;
    {
        const bool branch_taken_0x28c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C47Cu;
        // 0x28c480: 0x8c4401cc  lw          $a0, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c47c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C484u;
label_28c484:
    // 0x28c484: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c488: 0x8c4301a8  lw          $v1, 0x1A8($v0)
    ctx->pc = 0x28c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x28c48c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x28C48Cu;
    {
        const bool branch_taken_0x28c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C48Cu;
        // 0x28c490: 0x8c4401a4  lw          $a0, 0x1A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c48c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C494u;
label_28c494:
    // 0x28c494: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c498: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x28c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x28c49c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x28C49Cu;
    {
        const bool branch_taken_0x28c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C49Cu;
        // 0x28c4a0: 0x8c44010c  lw          $a0, 0x10C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c49c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4A4u;
label_28c4a4:
    // 0x28c4a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4a8: 0x8c4301f0  lw          $v1, 0x1F0($v0)
    ctx->pc = 0x28c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x28c4ac: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x28C4ACu;
    {
        const bool branch_taken_0x28c4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ACu;
        // 0x28c4b0: 0x8c4401ec  lw          $a0, 0x1EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ac) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4B4u;
label_28c4b4:
    // 0x28c4b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4b8: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x28c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x28c4bc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x28C4BCu;
    {
        const bool branch_taken_0x28c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4BCu;
        // 0x28c4c0: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4bc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4C4u;
label_28c4c4:
    // 0x28c4c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4c8: 0x8c4301e0  lw          $v1, 0x1E0($v0)
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x28c4cc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x28C4CCu;
    {
        const bool branch_taken_0x28c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4CCu;
        // 0x28c4d0: 0x8c4401dc  lw          $a0, 0x1DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4cc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4D4u;
label_28c4d4:
    // 0x28c4d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4d8: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x28c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x28c4dc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x28C4DCu;
    {
        const bool branch_taken_0x28c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4DCu;
        // 0x28c4e0: 0x8c4401ac  lw          $a0, 0x1AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4dc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4E4u;
label_28c4e4:
    // 0x28c4e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4e8: 0x8c4301b8  lw          $v1, 0x1B8($v0)
    ctx->pc = 0x28c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x28c4ec: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x28C4ECu;
    {
        const bool branch_taken_0x28c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4ECu;
        // 0x28c4f0: 0x8c4401b4  lw          $a0, 0x1B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ec) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C4F4u;
label_28c4f4:
    // 0x28c4f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c4f8: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x28c4fc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x28C4FCu;
    {
        const bool branch_taken_0x28c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4FCu;
        // 0x28c500: 0x8c440124  lw          $a0, 0x124($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4fc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C504u;
label_28c504:
    // 0x28c504: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c508: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x28c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x28c50c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x28C50Cu;
    {
        const bool branch_taken_0x28c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C50Cu;
        // 0x28c510: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c50c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C514u;
label_28c514:
    // 0x28c514: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c518: 0x8c430168  lw          $v1, 0x168($v0)
    ctx->pc = 0x28c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x28c51c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x28C51Cu;
    {
        const bool branch_taken_0x28c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C51Cu;
        // 0x28c520: 0x8c440164  lw          $a0, 0x164($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c51c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C524u;
label_28c524:
    // 0x28c524: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c528: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x28c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x28c52c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x28C52Cu;
    {
        const bool branch_taken_0x28c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C52Cu;
        // 0x28c530: 0x8c44013c  lw          $a0, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c52c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C534u;
label_28c534:
    // 0x28c534: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c538: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x28c53c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x28C53Cu;
    {
        const bool branch_taken_0x28c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C53Cu;
        // 0x28c540: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c53c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C544u;
label_28c544:
    // 0x28c544: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c548: 0x8c430118  lw          $v1, 0x118($v0)
    ctx->pc = 0x28c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x28c54c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x28C54Cu;
    {
        const bool branch_taken_0x28c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C54Cu;
        // 0x28c550: 0x8c440114  lw          $a0, 0x114($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c54c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C554u;
label_28c554:
    // 0x28c554: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c558: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x28c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x28c55c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28C55Cu;
    {
        const bool branch_taken_0x28c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C55Cu;
        // 0x28c560: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c55c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c568: 0x8c4301d8  lw          $v1, 0x1D8($v0)
    ctx->pc = 0x28c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x28c56c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x28C56Cu;
    {
        const bool branch_taken_0x28c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C56Cu;
        // 0x28c570: 0x8c4401d4  lw          $a0, 0x1D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c56c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C574u;
label_28c574:
    // 0x28c574: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c578: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x28c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28c57c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28C57Cu;
    {
        const bool branch_taken_0x28c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C57Cu;
        // 0x28c580: 0x8c4400ec  lw          $a0, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c57c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C584u;
label_28c584:
    // 0x28c584: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c588: 0x8c430188  lw          $v1, 0x188($v0)
    ctx->pc = 0x28c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x28c58c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28C58Cu;
    {
        const bool branch_taken_0x28c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C58Cu;
        // 0x28c590: 0x8c440184  lw          $a0, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c58c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C594u;
label_28c594:
    // 0x28c594: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c598: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x28c59c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28C59Cu;
    {
        const bool branch_taken_0x28c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C59Cu;
        // 0x28c5a0: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c59c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5A4u;
label_28c5a4:
    // 0x28c5a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5a8: 0x8c430170  lw          $v1, 0x170($v0)
    ctx->pc = 0x28c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x28c5ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28C5ACu;
    {
        const bool branch_taken_0x28c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5ACu;
        // 0x28c5b0: 0x8c44016c  lw          $a0, 0x16C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5ac) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5B4u;
label_28c5b4:
    // 0x28c5b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5b8: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x28c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x28c5bc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28C5BCu;
    {
        const bool branch_taken_0x28c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5BCu;
        // 0x28c5c0: 0x8c440134  lw          $a0, 0x134($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5bc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5C4u;
label_28c5c4:
    // 0x28c5c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5c8: 0x8c4300f8  lw          $v1, 0xF8($v0)
    ctx->pc = 0x28c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x28c5cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x28C5CCu;
    {
        const bool branch_taken_0x28c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5CCu;
        // 0x28c5d0: 0x8c4400f4  lw          $a0, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5cc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5D4u;
label_28c5d4:
    // 0x28c5d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5d8: 0x8c4301f8  lw          $v1, 0x1F8($v0)
    ctx->pc = 0x28c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x28c5dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28C5DCu;
    {
        const bool branch_taken_0x28c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5DCu;
        // 0x28c5e0: 0x8c4401f4  lw          $a0, 0x1F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5dc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5E4u;
label_28c5e4:
    // 0x28c5e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5e8: 0x8c430200  lw          $v1, 0x200($v0)
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x28c5ec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28C5ECu;
    {
        const bool branch_taken_0x28c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5ECu;
        // 0x28c5f0: 0x8c4401fc  lw          $a0, 0x1FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5ec) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C5F4u;
label_28c5f4:
    // 0x28c5f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c5f8: 0x8c430208  lw          $v1, 0x208($v0)
    ctx->pc = 0x28c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x28c5fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28C5FCu;
    {
        const bool branch_taken_0x28c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5FCu;
        // 0x28c600: 0x8c440204  lw          $a0, 0x204($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5fc) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C604u;
label_28c604:
    // 0x28c604: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c608: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x28c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x28c60c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28C60Cu;
    {
        const bool branch_taken_0x28c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C60Cu;
        // 0x28c610: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c60c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C614u;
label_28c614:
    // 0x28c614: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c618: 0x8c4301c0  lw          $v1, 0x1C0($v0)
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x28c61c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28C61Cu;
    {
        const bool branch_taken_0x28c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C61Cu;
        // 0x28c620: 0x8c4401bc  lw          $a0, 0x1BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c61c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C624u;
label_28c624:
    // 0x28c624: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c628: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x28c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x28c62c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28C62Cu;
    {
        const bool branch_taken_0x28c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C62Cu;
        // 0x28c630: 0x8c4401c4  lw          $a0, 0x1C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c62c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C634u;
label_28c634:
    // 0x28c634: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c638: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x28c63c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28C63Cu;
    {
        const bool branch_taken_0x28c63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C63Cu;
        // 0x28c640: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c63c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C644u;
label_28c644:
    // 0x28c644: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c648: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x28c64c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28C64Cu;
    {
        const bool branch_taken_0x28c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C64Cu;
        // 0x28c650: 0x8c440174  lw          $a0, 0x174($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c64c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C654u;
label_28c654:
    // 0x28c654: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c658: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x28c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x28c65c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28C65Cu;
    {
        const bool branch_taken_0x28c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C65Cu;
        // 0x28c660: 0x8c44017c  lw          $a0, 0x17C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c65c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C664u;
label_28c664:
    // 0x28c664: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c668: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x28c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x28c66c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28C66Cu;
    {
        const bool branch_taken_0x28c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C66Cu;
        // 0x28c670: 0x8c44011c  lw          $a0, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c66c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C674u;
label_28c674:
    // 0x28c674: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c678: 0x8c430190  lw          $v1, 0x190($v0)
    ctx->pc = 0x28c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x28c67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C67Cu;
    {
        const bool branch_taken_0x28c67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C67Cu;
        // 0x28c680: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c67c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C684u;
label_28c684:
    // 0x28c684: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c688: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x28c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x28c68c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28C68Cu;
    {
        const bool branch_taken_0x28c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C68Cu;
        // 0x28c690: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c68c) {
            ctx->pc = 0x28C6A0u;
            goto label_28c6a0;
        }
    }
    ctx->pc = 0x28C694u;
label_28c694:
    // 0x28c694: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c698: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x28c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x28c69c: 0x8c440214  lw          $a0, 0x214($v0)
    ctx->pc = 0x28c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28c6a0:
    // 0x28c6a0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x28c6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c6a4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x28c6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c6a8: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28c6ac: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x28c6b0: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x28c6b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x28c6b4: 0x10600127  beqz        $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x28C6B4u;
    {
        const bool branch_taken_0x28c6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6B4u;
        // 0x28c6b8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6b4) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C6BCu;
    // 0x28c6bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28c6c0: 0x24429990  addiu       $v0, $v0, -0x6670
    ctx->pc = 0x28c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
    // 0x28c6c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c6c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c6cc: 0x800008  jr          $a0
    ctx->pc = 0x28C6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C6D4u: goto label_28c6d4;
            case 0x28C714u: goto label_28c714;
            case 0x28C754u: goto label_28c754;
            case 0x28C794u: goto label_28c794;
            case 0x28C7D4u: goto label_28c7d4;
            case 0x28C814u: goto label_28c814;
            case 0x28C854u: goto label_28c854;
            case 0x28C894u: goto label_28c894;
            case 0x28C8D4u: goto label_28c8d4;
            case 0x28C914u: goto label_28c914;
            case 0x28C954u: goto label_28c954;
            case 0x28C994u: goto label_28c994;
            case 0x28C9D4u: goto label_28c9d4;
            case 0x28CA14u: goto label_28ca14;
            case 0x28CA54u: goto label_28ca54;
            case 0x28CA94u: goto label_28ca94;
            case 0x28CB54u: goto label_28cb54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C6CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28C6D4u;
label_28c6d4:
    // 0x28c6d4: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c6dc: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x28C6DCu;
    {
        const bool branch_taken_0x28c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6DCu;
        // 0x28c6e0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6dc) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C6E4u;
    // 0x28c6e4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c6e8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c6f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6f8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c6fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c700: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x28c700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28c704: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C704u;
    SET_GPR_U32(ctx, 31, 0x28C70Cu);
    ctx->pc = 0x28C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C704u;
    // 0x28c708: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C704u, 0x28C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C70Cu;
label_28c70c:
    // 0x28c70c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x28C70Cu;
    {
        const bool branch_taken_0x28c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C70Cu;
        // 0x28c710: 0x24030227  addiu       $v1, $zero, 0x227 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c70c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C714u;
label_28c714:
    // 0x28c714: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c718: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c71c: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x28C71Cu;
    {
        const bool branch_taken_0x28c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C71Cu;
        // 0x28c720: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c71c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C724u;
    // 0x28c724: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c728: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c738: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c73c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c740: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x28c740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x28c744: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C744u;
    SET_GPR_U32(ctx, 31, 0x28C74Cu);
    ctx->pc = 0x28C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C744u;
    // 0x28c748: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C744u, 0x28C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C74Cu;
label_28c74c:
    // 0x28c74c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x28C74Cu;
    {
        const bool branch_taken_0x28c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C74Cu;
        // 0x28c750: 0x24030228  addiu       $v1, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c74c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C754u;
label_28c754:
    // 0x28c754: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c75c: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x28C75Cu;
    {
        const bool branch_taken_0x28c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C75Cu;
        // 0x28c760: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c75c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C764u;
    // 0x28c764: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c768: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c778: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c780: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x28c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x28c784: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C784u;
    SET_GPR_U32(ctx, 31, 0x28C78Cu);
    ctx->pc = 0x28C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C784u;
    // 0x28c788: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C784u, 0x28C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C78Cu;
label_28c78c:
    // 0x28c78c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x28C78Cu;
    {
        const bool branch_taken_0x28c78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C78Cu;
        // 0x28c790: 0x24030229  addiu       $v1, $zero, 0x229 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c78c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C794u;
label_28c794:
    // 0x28c794: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c79c: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x28C79Cu;
    {
        const bool branch_taken_0x28c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C79Cu;
        // 0x28c7a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c79c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C7A4u;
    // 0x28c7a4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c7a8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c7b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7b8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7c0: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x28c7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28c7c4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C7C4u;
    SET_GPR_U32(ctx, 31, 0x28C7CCu);
    ctx->pc = 0x28C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7C4u;
    // 0x28c7c8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C7C4u, 0x28C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7CCu;
label_28c7cc:
    // 0x28c7cc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x28C7CCu;
    {
        const bool branch_taken_0x28c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7CCu;
        // 0x28c7d0: 0x2403022a  addiu       $v1, $zero, 0x22A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7cc) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C7D4u;
label_28c7d4:
    // 0x28c7d4: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c7dc: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x28C7DCu;
    {
        const bool branch_taken_0x28c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7DCu;
        // 0x28c7e0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7dc) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C7E4u;
    // 0x28c7e4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c7e8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c7f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7f8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c7fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c800: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x28c800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x28c804: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C804u;
    SET_GPR_U32(ctx, 31, 0x28C80Cu);
    ctx->pc = 0x28C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C804u;
    // 0x28c808: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C804u, 0x28C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C80Cu;
label_28c80c:
    // 0x28c80c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x28C80Cu;
    {
        const bool branch_taken_0x28c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C80Cu;
        // 0x28c810: 0x2403022b  addiu       $v1, $zero, 0x22B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c80c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C814u;
label_28c814:
    // 0x28c814: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c81c: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x28C81Cu;
    {
        const bool branch_taken_0x28c81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C81Cu;
        // 0x28c820: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c81c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C824u;
    // 0x28c824: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c828: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c838: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c83c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c840: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x28c840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x28c844: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C844u;
    SET_GPR_U32(ctx, 31, 0x28C84Cu);
    ctx->pc = 0x28C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C844u;
    // 0x28c848: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C844u, 0x28C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C84Cu;
label_28c84c:
    // 0x28c84c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x28C84Cu;
    {
        const bool branch_taken_0x28c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C84Cu;
        // 0x28c850: 0x2403024a  addiu       $v1, $zero, 0x24A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c84c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C854u;
label_28c854:
    // 0x28c854: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c858: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c85c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x28C85Cu;
    {
        const bool branch_taken_0x28c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C85Cu;
        // 0x28c860: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c85c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C864u;
    // 0x28c864: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c868: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c878: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c87c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c880: 0x8d060018  lw          $a2, 0x18($t0)
    ctx->pc = 0x28c880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x28c884: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C884u;
    SET_GPR_U32(ctx, 31, 0x28C88Cu);
    ctx->pc = 0x28C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C884u;
    // 0x28c888: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C884u, 0x28C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C88Cu;
label_28c88c:
    // 0x28c88c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x28C88Cu;
    {
        const bool branch_taken_0x28c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C88Cu;
        // 0x28c890: 0x2403022c  addiu       $v1, $zero, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c88c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C894u;
label_28c894:
    // 0x28c894: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c89c: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x28C89Cu;
    {
        const bool branch_taken_0x28c89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C89Cu;
        // 0x28c8a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c89c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C8A4u;
    // 0x28c8a4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c8a8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8b8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8c0: 0x8d060030  lw          $a2, 0x30($t0)
    ctx->pc = 0x28c8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x28c8c4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C8C4u;
    SET_GPR_U32(ctx, 31, 0x28C8CCu);
    ctx->pc = 0x28C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8C4u;
    // 0x28c8c8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C8C4u, 0x28C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8CCu;
label_28c8cc:
    // 0x28c8cc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x28C8CCu;
    {
        const bool branch_taken_0x28c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8CCu;
        // 0x28c8d0: 0x2403022e  addiu       $v1, $zero, 0x22E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8cc) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C8D4u;
label_28c8d4:
    // 0x28c8d4: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c8d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c8dc: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x28C8DCu;
    {
        const bool branch_taken_0x28c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8DCu;
        // 0x28c8e0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8dc) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C8E4u;
    // 0x28c8e4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c8e8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c8f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8f8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c8fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c900: 0x8d060028  lw          $a2, 0x28($t0)
    ctx->pc = 0x28c900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x28c904: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C904u;
    SET_GPR_U32(ctx, 31, 0x28C90Cu);
    ctx->pc = 0x28C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C904u;
    // 0x28c908: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C904u, 0x28C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C90Cu;
label_28c90c:
    // 0x28c90c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x28C90Cu;
    {
        const bool branch_taken_0x28c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C90Cu;
        // 0x28c910: 0x2403022f  addiu       $v1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c90c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C914u;
label_28c914:
    // 0x28c914: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c91c: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x28C91Cu;
    {
        const bool branch_taken_0x28c91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C91Cu;
        // 0x28c920: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c91c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C924u;
    // 0x28c924: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c928: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c938: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c93c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c940: 0x8d060034  lw          $a2, 0x34($t0)
    ctx->pc = 0x28c940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x28c944: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C944u;
    SET_GPR_U32(ctx, 31, 0x28C94Cu);
    ctx->pc = 0x28C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C944u;
    // 0x28c948: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C944u, 0x28C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C94Cu;
label_28c94c:
    // 0x28c94c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x28C94Cu;
    {
        const bool branch_taken_0x28c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C94Cu;
        // 0x28c950: 0x2403024c  addiu       $v1, $zero, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c94c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C954u;
label_28c954:
    // 0x28c954: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c95c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x28C95Cu;
    {
        const bool branch_taken_0x28c95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C95Cu;
        // 0x28c960: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c95c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C964u;
    // 0x28c964: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c968: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c978: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c980: 0x8d060048  lw          $a2, 0x48($t0)
    ctx->pc = 0x28c980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x28c984: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C984u;
    SET_GPR_U32(ctx, 31, 0x28C98Cu);
    ctx->pc = 0x28C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C984u;
    // 0x28c988: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C984u, 0x28C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C98Cu;
label_28c98c:
    // 0x28c98c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x28C98Cu;
    {
        const bool branch_taken_0x28c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C98Cu;
        // 0x28c990: 0x2403024e  addiu       $v1, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c98c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C994u;
label_28c994:
    // 0x28c994: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c99c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x28C99Cu;
    {
        const bool branch_taken_0x28c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C99Cu;
        // 0x28c9a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c99c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C9A4u;
    // 0x28c9a4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c9a8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9b8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9c0: 0x8d06002c  lw          $a2, 0x2C($t0)
    ctx->pc = 0x28c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x28c9c4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28C9C4u;
    SET_GPR_U32(ctx, 31, 0x28C9CCu);
    ctx->pc = 0x28C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C9C4u;
    // 0x28c9c8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28C9C4u, 0x28C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9CCu;
label_28c9cc:
    // 0x28c9cc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x28C9CCu;
    {
        const bool branch_taken_0x28c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9CCu;
        // 0x28c9d0: 0x2403024b  addiu       $v1, $zero, 0x24B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9cc) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28C9D4u;
label_28c9d4:
    // 0x28c9d4: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28c9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c9dc: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x28C9DCu;
    {
        const bool branch_taken_0x28c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9DCu;
        // 0x28c9e0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9dc) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28C9E4u;
    // 0x28c9e4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28c9e8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28c9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c9f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9f8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28c9fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca00: 0x8d060038  lw          $a2, 0x38($t0)
    ctx->pc = 0x28ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x28ca04: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CA04u;
    SET_GPR_U32(ctx, 31, 0x28CA0Cu);
    ctx->pc = 0x28CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA04u;
    // 0x28ca08: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CA04u, 0x28CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA0Cu;
label_28ca0c:
    // 0x28ca0c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28CA0Cu;
    {
        const bool branch_taken_0x28ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA0Cu;
        // 0x28ca10: 0x2403022d  addiu       $v1, $zero, 0x22D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca0c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28CA14u;
label_28ca14:
    // 0x28ca14: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28ca18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ca1c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x28CA1Cu;
    {
        const bool branch_taken_0x28ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA1Cu;
        // 0x28ca20: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca1c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28CA24u;
    // 0x28ca24: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28ca28: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28ca28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28ca2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ca34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca38: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28ca3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ca3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca40: 0x8d06003c  lw          $a2, 0x3C($t0)
    ctx->pc = 0x28ca40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x28ca44: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CA44u;
    SET_GPR_U32(ctx, 31, 0x28CA4Cu);
    ctx->pc = 0x28CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA44u;
    // 0x28ca48: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CA44u, 0x28CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA4Cu;
label_28ca4c:
    // 0x28ca4c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28CA4Cu;
    {
        const bool branch_taken_0x28ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA4Cu;
        // 0x28ca50: 0x2403024d  addiu       $v1, $zero, 0x24D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca4c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28CA54u;
label_28ca54:
    // 0x28ca54: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28ca58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ca5c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28CA5Cu;
    {
        const bool branch_taken_0x28ca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA5Cu;
        // 0x28ca60: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca5c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28CA64u;
    // 0x28ca64: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28ca68: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28ca6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ca74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28ca74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca78: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28ca7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ca7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca80: 0x8d060040  lw          $a2, 0x40($t0)
    ctx->pc = 0x28ca80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x28ca84: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CA84u;
    SET_GPR_U32(ctx, 31, 0x28CA8Cu);
    ctx->pc = 0x28CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CA84u;
    // 0x28ca88: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CA84u, 0x28CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA8Cu;
label_28ca8c:
    // 0x28ca8c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28CA8Cu;
    {
        const bool branch_taken_0x28ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA8Cu;
        // 0x28ca90: 0x24030243  addiu       $v1, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca8c) {
            ctx->pc = 0x28CB50u;
            goto label_28cb50;
        }
    }
    ctx->pc = 0x28CA94u;
label_28ca94:
    // 0x28ca94: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28ca98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ca9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CA9Cu;
    {
        const bool branch_taken_0x28ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA9Cu;
        // 0x28caa0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca9c) {
            ctx->pc = 0x28CAD4u;
            goto label_28cad4;
        }
    }
    ctx->pc = 0x28CAA4u;
    // 0x28caa4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28caa8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28caac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cab0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28cab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28cab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cab8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28cabc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28cabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cac0: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x28cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x28cac4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CAC4u;
    SET_GPR_U32(ctx, 31, 0x28CACCu);
    ctx->pc = 0x28CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAC4u;
    // 0x28cac8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CAC4u, 0x28CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CACCu;
label_28cacc:
    // 0x28cacc: 0x24030271  addiu       $v1, $zero, 0x271
    ctx->pc = 0x28caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x28cad0: 0xae030564  sw          $v1, 0x564($s0)
    ctx->pc = 0x28cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
label_28cad4:
    // 0x28cad4: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28cad8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28cad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28cadc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CADCu;
    {
        const bool branch_taken_0x28cadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CADCu;
        // 0x28cae0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cadc) {
            ctx->pc = 0x28CB14u;
            goto label_28cb14;
        }
    }
    ctx->pc = 0x28CAE4u;
    // 0x28cae4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28cae8: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28cae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28caec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28caf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28caf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caf8: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28cafc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28cafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb00: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x28cb04: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CB04u;
    SET_GPR_U32(ctx, 31, 0x28CB0Cu);
    ctx->pc = 0x28CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB04u;
    // 0x28cb08: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CB04u, 0x28CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB0Cu;
label_28cb0c:
    // 0x28cb0c: 0x24030272  addiu       $v1, $zero, 0x272
    ctx->pc = 0x28cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
    // 0x28cb10: 0xae030564  sw          $v1, 0x564($s0)
    ctx->pc = 0x28cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
label_28cb14:
    // 0x28cb14: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x28cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
    // 0x28cb18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x28cb1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CB1Cu;
    {
        const bool branch_taken_0x28cb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB1Cu;
        // 0x28cb20: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb1c) {
            ctx->pc = 0x28CB54u;
            goto label_28cb54;
        }
    }
    ctx->pc = 0x28CB24u;
    // 0x28cb24: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x28cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28cb28: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28cb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28cb34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb38: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x28cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x28cb3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cb40: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x28cb44: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x28CB44u;
    SET_GPR_U32(ctx, 31, 0x28CB4Cu);
    ctx->pc = 0x28CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB44u;
    // 0x28cb48: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x28CB44u, 0x28CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB4Cu;
label_28cb4c:
    // 0x28cb4c: 0x24030273  addiu       $v1, $zero, 0x273
    ctx->pc = 0x28cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
label_28cb50:
    // 0x28cb50: 0xae030564  sw          $v1, 0x564($s0)
    ctx->pc = 0x28cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
label_28cb54:
    // 0x28cb54: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CB54u;
    {
        const bool branch_taken_0x28cb54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB54u;
        // 0x28cb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb54) {
            ctx->pc = 0x28CB64u;
            goto label_28cb64;
        }
    }
    ctx->pc = 0x28CB5Cu;
    // 0x28cb5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CB5Cu;
    {
        const bool branch_taken_0x28cb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB5Cu;
        // 0x28cb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb5c) {
            ctx->pc = 0x28CB78u;
            goto label_28cb78;
        }
    }
    ctx->pc = 0x28CB64u;
label_28cb64:
    // 0x28cb64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28cb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28cb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28cb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb70: 0xc0525ce  jal         func_149738
    ctx->pc = 0x28CB70u;
    SET_GPR_U32(ctx, 31, 0x28CB78u);
    ctx->pc = 0x28CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB70u;
    // 0x28cb74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x28CB70u, 0x28CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB78u;
label_28cb78:
    // 0x28cb78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28cb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28cb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cb80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28cb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB88u;
        // 0x28cb8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB90u;
}
