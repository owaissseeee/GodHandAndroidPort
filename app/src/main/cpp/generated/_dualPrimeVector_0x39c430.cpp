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

// Function: _dualPrimeVector
// Address: 0x39c430 - 0x39c5b8
void _dualPrimeVector_0x39c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dualPrimeVector_0x39c430");
#endif

    switch (ctx->pc) {
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        default: break;
    }

    ctx->pc = 0x39c430u;

    // 0x39c430: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x39c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x39c434: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39c438: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x39C438u;
    {
        const bool branch_taken_0x39c438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39c438) {
            ctx->pc = 0x39C550u;
            goto label_39c550;
        }
    }
    ctx->pc = 0x39C440u;
    // 0x39c440: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x39c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x39c444: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x39C444u;
    {
        const bool branch_taken_0x39c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c444) {
            ctx->pc = 0x39C448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C444u;
            // 0x39c448: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C4D8u;
            goto label_39c4d8;
        }
    }
    ctx->pc = 0x39C44Cu;
    // 0x39c44c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C44Cu;
    {
        const bool branch_taken_0x39c44c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x39C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C44Cu;
        // 0x39c450: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c44c) {
            ctx->pc = 0x39C460u;
            goto label_39c460;
        }
    }
    ctx->pc = 0x39C454u;
    // 0x39c454: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x39c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x39c458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C458u;
    {
        const bool branch_taken_0x39c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C458u;
        // 0x39c45c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c458) {
            ctx->pc = 0x39C464u;
            goto label_39c464;
        }
    }
    ctx->pc = 0x39C460u;
label_39c460:
    // 0x39c460: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x39c460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_39c464:
    // 0x39c464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c468: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39c468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x39c46c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C46Cu;
    {
        const bool branch_taken_0x39c46c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x39C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C46Cu;
        // 0x39c470: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c46c) {
            ctx->pc = 0x39C480u;
            goto label_39c480;
        }
    }
    ctx->pc = 0x39C474u;
    // 0x39c474: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x39c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x39c478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C478u;
    {
        const bool branch_taken_0x39c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C478u;
        // 0x39c47c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c478) {
            ctx->pc = 0x39C484u;
            goto label_39c484;
        }
    }
    ctx->pc = 0x39C480u;
label_39c480:
    // 0x39c480: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x39c480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_39c484:
    // 0x39c484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39c48c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x39c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x39c490: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x39c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x39c494: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39c498: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x39C498u;
    {
        const bool branch_taken_0x39c498 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x39C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C498u;
        // 0x39c49c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c498) {
            ctx->pc = 0x39C4A4u;
            goto label_39c4a4;
        }
    }
    ctx->pc = 0x39C4A0u;
    // 0x39c4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39c4a4:
    // 0x39c4a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c4a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c4ac: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x39c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x39c4b0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x39c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x39c4b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x39c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x39c4b8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39C4B8u;
    {
        const bool branch_taken_0x39c4b8 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x39C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4B8u;
        // 0x39c4bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4b8) {
            ctx->pc = 0x39C4C4u;
            goto label_39c4c4;
        }
    }
    ctx->pc = 0x39C4C0u;
    // 0x39c4c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39c4c4:
    // 0x39c4c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c4c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_39c4c8:
    // 0x39c4c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39c4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x39C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4D0u;
        // 0x39c4d4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C4D8u;
label_39c4d8:
    // 0x39c4d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39c4dc: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x39C4DCu;
    {
        const bool branch_taken_0x39c4dc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x39C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4DCu;
        // 0x39c4e0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4dc) {
            ctx->pc = 0x39C4E8u;
            goto label_39c4e8;
        }
    }
    ctx->pc = 0x39C4E4u;
    // 0x39c4e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39c4e8:
    // 0x39c4e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c4e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c4f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x39c4f4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x39c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x39c4f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x39c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x39c4fc: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39C4FCu;
    {
        const bool branch_taken_0x39c4fc = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x39C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4FCu;
        // 0x39c500: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4fc) {
            ctx->pc = 0x39C508u;
            goto label_39c508;
        }
    }
    ctx->pc = 0x39C504u;
    // 0x39c504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39c508:
    // 0x39c508: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39c514: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x39c514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x39c518: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C518u;
    {
        const bool branch_taken_0x39c518 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x39C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C518u;
        // 0x39c51c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c518) {
            ctx->pc = 0x39C52Cu;
            goto label_39c52c;
        }
    }
    ctx->pc = 0x39C520u;
    // 0x39c520: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x39c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x39c524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C524u;
    {
        const bool branch_taken_0x39c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C524u;
        // 0x39c528: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c524) {
            ctx->pc = 0x39C530u;
            goto label_39c530;
        }
    }
    ctx->pc = 0x39C52Cu;
label_39c52c:
    // 0x39c52c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x39c52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_39c530:
    // 0x39c530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c534: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x39c534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x39c538: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C538u;
    {
        const bool branch_taken_0x39c538 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x39C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C538u;
        // 0x39c53c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c538) {
            ctx->pc = 0x39C548u;
            goto label_39c548;
        }
    }
    ctx->pc = 0x39C540u;
    // 0x39c540: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x39C540u;
    {
        const bool branch_taken_0x39c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C540u;
        // 0x39c544: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c540) {
            ctx->pc = 0x39C4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c4c4;
        }
    }
    ctx->pc = 0x39C548u;
label_39c548:
    // 0x39c548: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x39C548u;
    {
        const bool branch_taken_0x39c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C548u;
        // 0x39c54c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c548) {
            ctx->pc = 0x39C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c4c8;
        }
    }
    ctx->pc = 0x39C550u;
label_39c550:
    // 0x39c550: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C550u;
    {
        const bool branch_taken_0x39c550 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x39C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C550u;
        // 0x39c554: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c550) {
            ctx->pc = 0x39C564u;
            goto label_39c564;
        }
    }
    ctx->pc = 0x39C558u;
    // 0x39c558: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x39c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x39c55c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C55Cu;
    {
        const bool branch_taken_0x39c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C55Cu;
        // 0x39c560: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c55c) {
            ctx->pc = 0x39C568u;
            goto label_39c568;
        }
    }
    ctx->pc = 0x39C564u;
label_39c564:
    // 0x39c564: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x39c564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_39c568:
    // 0x39c568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c56c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x39c570: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C570u;
    {
        const bool branch_taken_0x39c570 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x39C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C570u;
        // 0x39c574: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c570) {
            ctx->pc = 0x39C584u;
            goto label_39c584;
        }
    }
    ctx->pc = 0x39C578u;
    // 0x39c578: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x39c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x39c57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C57Cu;
    {
        const bool branch_taken_0x39c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C57Cu;
        // 0x39c580: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c57c) {
            ctx->pc = 0x39C588u;
            goto label_39c588;
        }
    }
    ctx->pc = 0x39C584u;
label_39c584:
    // 0x39c584: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x39c584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_39c588:
    // 0x39c588: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x39c588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39c58c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x39c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x39c590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c594: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x39c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x39c598: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C598u;
    {
        const bool branch_taken_0x39c598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C598u;
        // 0x39c59c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c598) {
            ctx->pc = 0x39C5ACu;
            goto label_39c5ac;
        }
    }
    ctx->pc = 0x39C5A0u;
    // 0x39c5a0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x39c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39c5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x39C5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5A4u;
        // 0x39c5a8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C5ACu;
label_39c5ac:
    // 0x39c5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x39C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5ACu;
        // 0x39c5b0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C5B4u;
    // 0x39c5b4: 0x0  nop
    ctx->pc = 0x39c5b4u;
    // NOP
    ctx->pc = 0x39c5b8u;
}
