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

// Function: ADXT_ExecHndl
// Address: 0x32cff8 - 0x32d0c0
void ADXT_ExecHndl_0x32cff8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_ExecHndl_0x32cff8");
#endif

    if (__builtin_expect(ctx->pc != 0x32cff8u, 0)) {
        switch (ctx->pc) {
            case 0x32d040u: goto label_32d040;
            case 0x32d058u: goto label_32d058;
            case 0x32d070u: goto label_32d070;
            case 0x32d088u: goto label_32d088;
            case 0x32d0a0u: goto label_32d0a0;
            case 0x32d0a8u: goto label_32d0a8;
            default: break;
        }
    }


    // 0x32cff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d000: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d004: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32D004u;
    {
        const bool branch_taken_0x32d004 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D004u;
        // 0x32d008: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d004) {
            ctx->pc = 0x32D028u;
            goto label_32d028;
        }
    }
    // 0x32d00c: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32d010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d018: 0x24842918  addiu       $a0, $a0, 0x2918
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10520));
    // 0x32d01c: 0x80cfc4c  j           func_33F130
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D01Cu;
    // 0x32d020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32D01Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x32d024: 0x0  nop
    // NOP
label_32d028:
    // 0x32d028: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x32d028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32d02c: 0x24020003  addiu       $v0, $zero, 0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32d030: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D030u;
    {
        const bool branch_taken_0x32d030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D030u;
        // 0x32d034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d030) {
            ctx->pc = 0x32D048u;
            goto label_32d048;
        }
    }
    // 0x32d038: 0xc0cb2e4  jal         func_32CB90
    ctx->pc = 0x32D038u;
    SET_GPR_U32(ctx, 31, 0x32D040u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032CB90_0x32cb90, 0x32cb90u, 0x32d040u)) {
        return;
    }
label_32d040:
    // 0x32d040: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x32D040u;
    {
        const bool branch_taken_0x32d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d040) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
label_32d048:
    // 0x32d048: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D048u;
    {
        const bool branch_taken_0x32d048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D048u;
        // 0x32d04c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d048) {
            ctx->pc = 0x32D060u;
            goto label_32d060;
        }
    }
    // 0x32d050: 0xc0cb17e  jal         func_32C5F8
    ctx->pc = 0x32D050u;
    SET_GPR_U32(ctx, 31, 0x32D058u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032C5F8_0x32c5f8, 0x32c5f8u, 0x32d058u)) {
        return;
    }
label_32d058:
    // 0x32d058: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32D058u;
    {
        const bool branch_taken_0x32d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d058) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
label_32d060:
    // 0x32d060: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D060u;
    {
        const bool branch_taken_0x32d060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D060u;
        // 0x32d064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d060) {
            ctx->pc = 0x32D078u;
            goto label_32d078;
        }
    }
    // 0x32d068: 0xc0cb284  jal         func_32CA10
    ctx->pc = 0x32D068u;
    SET_GPR_U32(ctx, 31, 0x32D070u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032CA10_0x32ca10, 0x32ca10u, 0x32d070u)) {
        return;
    }
label_32d070:
    // 0x32d070: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32D070u;
    {
        const bool branch_taken_0x32d070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d070) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
label_32d078:
    // 0x32d078: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D078u;
    {
        const bool branch_taken_0x32d078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D078u;
        // 0x32d07c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d078) {
            ctx->pc = 0x32D090u;
            goto label_32d090;
        }
    }
    // 0x32d080: 0xc0cb324  jal         func_32CC90
    ctx->pc = 0x32D080u;
    SET_GPR_U32(ctx, 31, 0x32D088u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032CC90_0x32cc90, 0x32cc90u, 0x32d088u)) {
        return;
    }
label_32d088:
    // 0x32d088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D088u;
    {
        const bool branch_taken_0x32d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d088) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
label_32d090:
    // 0x32d090: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D090u;
    {
        const bool branch_taken_0x32d090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d090) {
            ctx->pc = 0x32D0A0u;
            goto label_32d0a0;
        }
    }
    // 0x32d098: 0xc0cb3a6  jal         func_32CE98
    ctx->pc = 0x32D098u;
    SET_GPR_U32(ctx, 31, 0x32D0A0u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032CE98_0x32ce98, 0x32ce98u, 0x32d0a0u)) {
        return;
    }
label_32d0a0:
    // 0x32d0a0: 0xc0cb3cc  jal         func_32CF30
    SET_GPR_U32(ctx, 31, 0x32D0A8u);
    ctx->pc = 0x32D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0A0u;
    // 0x32d0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032CF30_0x32cf30, 0x32cf30u, 0x32d0a8u)) {
        return;
    }
label_32d0a8:
    // 0x32d0a8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d0ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d0b4: 0x80cb3ac  j           func_32CEB0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0B4u;
    // 0x32d0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEB0u, 0x32D0B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x32d0bc: 0x0  nop
    // NOP
    ctx->pc = 0x32d0c0u;
}