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

// Function: SJX_Create
// Address: 0x33b428 - 0x33b520
void SJX_Create_0x33b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJX_Create_0x33b428");
#endif

    switch (ctx->pc) {
        case 0x33b468u: goto label_33b468;
        case 0x33b4a8u: goto label_33b4a8;
        case 0x33b4dcu: goto label_33b4dc;
        case 0x33b4f0u: goto label_33b4f0;
        default: break;
    }

    ctx->pc = 0x33b428u;

    // 0x33b428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33b428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33b42c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33b430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33b434: 0x24508de8  addiu       $s0, $v0, -0x7218
    ctx->pc = 0x33b434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938088));
    // 0x33b438: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33b43c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33b43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b440: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33b444: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b448: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33b44c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b450: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33b454: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x33b454u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3E8DE8u));
    // 0x33b458: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B458u;
    {
        const bool branch_taken_0x33b458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B458u;
        // 0x33b45c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b458) {
            ctx->pc = 0x33B48Cu;
            goto label_33b48c;
        }
    }
    ctx->pc = 0x33B460u;
    // 0x33b460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33b460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b464: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x33b464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b468:
    // 0x33b468: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33b46c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x33b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x33b470: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x33b470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x33b474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B474u;
    {
        const bool branch_taken_0x33b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B474u;
        // 0x33b478: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b474) {
            ctx->pc = 0x33B48Cu;
            goto label_33b48c;
        }
    }
    ctx->pc = 0x33B47Cu;
    // 0x33b47c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x33b47cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b480: 0x0  nop
    ctx->pc = 0x33b480u;
    // NOP
    // 0x33b484: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33B484u;
    {
        const bool branch_taken_0x33b484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B484u;
        // 0x33b488: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b484) {
            ctx->pc = 0x33B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b468;
        }
    }
    ctx->pc = 0x33B48Cu;
label_33b48c:
    // 0x33b48c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33b490: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B490u;
    {
        const bool branch_taken_0x33b490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B490u;
        // 0x33b494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b490) {
            ctx->pc = 0x33B504u;
            goto label_33b504;
        }
    }
    ctx->pc = 0x33B498u;
    // 0x33b498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4a0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33B4A0u;
    SET_GPR_U32(ctx, 31, 0x33B4A8u);
    ctx->pc = 0x33B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B4A0u;
    // 0x33b4a4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33B4A0u, 0x33B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4A8u;
label_33b4a8:
    // 0x33b4a8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x33b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x33b4ac: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x33b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x33b4b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4b4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x33b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x33b4b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33b4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33b4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b4c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33b4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33b4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b4c8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x33b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x33b4cc: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x33b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x33b4d0: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x33b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x33b4d4: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33B4D4u;
    SET_GPR_U32(ctx, 31, 0x33B4DCu);
    ctx->pc = 0x33B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B4D4u;
    // 0x33b4d8: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33B4D4u, 0x33B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4DCu;
label_33b4dc:
    // 0x33b4dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B4DCu;
    {
        const bool branch_taken_0x33b4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4DCu;
        // 0x33b4e0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4dc) {
            ctx->pc = 0x33B4F8u;
            goto label_33b4f8;
        }
    }
    ctx->pc = 0x33B4E4u;
    // 0x33b4e4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b4e8: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x33B4E8u;
    SET_GPR_U32(ctx, 31, 0x33B4F0u);
    ctx->pc = 0x33B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B4E8u;
    // 0x33b4ec: 0x24845e20  addiu       $a0, $a0, 0x5E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33B4E8u, 0x33B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4F0u;
label_33b4f0:
    // 0x33b4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B4F0u;
    {
        const bool branch_taken_0x33b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4F0u;
        // 0x33b4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4f0) {
            ctx->pc = 0x33B504u;
            goto label_33b504;
        }
    }
    ctx->pc = 0x33B4F8u;
label_33b4f8:
    // 0x33b4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b4fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33b4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b500: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33b500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33b504:
    // 0x33b504: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b508: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33b508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b50c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33b50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b510: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33b510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33b514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33b514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b518: 0x3e00008  jr          $ra
    ctx->pc = 0x33B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B518u;
        // 0x33b51c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B520u;
}
