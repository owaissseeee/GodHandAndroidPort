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

// Function: func_00373BA8
// Address: 0x373ba8 - 0x373d48
void func_00373BA8_0x373ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373BA8_0x373ba8");
#endif

    switch (ctx->pc) {
        case 0x373c60u: goto label_373c60;
        case 0x373c78u: goto label_373c78;
        case 0x373cf8u: goto label_373cf8;
        case 0x373d0cu: goto label_373d0c;
        case 0x373d28u: goto label_373d28;
        default: break;
    }

    ctx->pc = 0x373ba8u;

    // 0x373ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373bb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x373bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373bbc: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x373bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x373bc0: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x373bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x373bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373BC4u;
    {
        const bool branch_taken_0x373bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BC4u;
        // 0x373bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bc4) {
            ctx->pc = 0x373BD4u;
            goto label_373bd4;
        }
    }
    ctx->pc = 0x373BCCu;
    // 0x373bcc: 0x1500002c  bnez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x373BCCu;
    {
        const bool branch_taken_0x373bcc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x373bcc) {
            ctx->pc = 0x373C80u;
            goto label_373c80;
        }
    }
    ctx->pc = 0x373BD4u;
label_373bd4:
    // 0x373bd4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373BD4u;
    {
        const bool branch_taken_0x373bd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x373BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BD4u;
        // 0x373bd8: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bd4) {
            ctx->pc = 0x373BE8u;
            goto label_373be8;
        }
    }
    ctx->pc = 0x373BDCu;
    // 0x373bdc: 0x240240c0  addiu       $v0, $zero, 0x40C0
    ctx->pc = 0x373bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16576));
    // 0x373be0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x373BE0u;
    {
        const bool branch_taken_0x373be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BE0u;
        // 0x373be4: 0x1421018  mult        $v0, $t2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373be0) {
            ctx->pc = 0x373C44u;
            goto label_373c44;
        }
    }
    ctx->pc = 0x373BE8u;
label_373be8:
    // 0x373be8: 0x240761a8  addiu       $a3, $zero, 0x61A8
    ctx->pc = 0x373be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x373bec: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x373becu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x373bf0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x373bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x373bf4: 0x240540c0  addiu       $a1, $zero, 0x40C0
    ctx->pc = 0x373bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16576));
    // 0x373bf8: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x373bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x373bfc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x373BFCu;
    {
        const bool branch_taken_0x373bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373bfc) {
            ctx->pc = 0x373C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373BFCu;
            // 0x373c00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x373C04u;
            goto label_373c04;
        }
    }
    ctx->pc = 0x373C04u;
label_373c04:
    // 0x373c04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x373c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373c08: 0x1012  mflo        $v0
    ctx->pc = 0x373c08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x373c0c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x373c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x373c10: 0x1452818  mult        $a1, $t2, $a1
    ctx->pc = 0x373c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x373c14: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x373c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x373c18: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x373c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x373c1c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x373c1cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x373c20: 0x1012  mflo        $v0
    ctx->pc = 0x373c20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x373c24: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x373c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x373c28: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x373c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x373c2c: 0x24420fff  addiu       $v0, $v0, 0xFFF
    ctx->pc = 0x373c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x373c30: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x373c30u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x373c34: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x373c34u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x373c38: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x373c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x373c3c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x373c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x373c40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x373c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_373c44:
    // 0x373c44: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x373c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x373c48: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x373c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x373c4c: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x373c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x373c50: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x373c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x373c54: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x373c58: 0xc0c7238  jal         func_31C8E0
    ctx->pc = 0x373C58u;
    SET_GPR_U32(ctx, 31, 0x373C60u);
    ctx->pc = 0x373C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C58u;
    // 0x373c5c: 0x26064210  addiu       $a2, $s0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8E0u, 0x373C58u, 0x373C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C60u;
label_373c60:
    // 0x373c60: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x373C60u;
    {
        const bool branch_taken_0x373c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C60u;
        // 0x373c64: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c60) {
            ctx->pc = 0x373D2Cu;
            goto label_373d2c;
        }
    }
    ctx->pc = 0x373C68u;
    // 0x373c68: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x373c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c70: 0xc0ca50e  jal         func_329438
    ctx->pc = 0x373C70u;
    SET_GPR_U32(ctx, 31, 0x373C78u);
    ctx->pc = 0x373C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C70u;
    // 0x373c74: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329438u, 0x373C70u, 0x373C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C78u;
label_373c78:
    // 0x373c78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x373C78u;
    {
        const bool branch_taken_0x373c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C78u;
        // 0x373c7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c78) {
            ctx->pc = 0x373D10u;
            goto label_373d10;
        }
    }
    ctx->pc = 0x373C80u;
label_373c80:
    // 0x373c80: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373C80u;
    {
        const bool branch_taken_0x373c80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x373C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C80u;
        // 0x373c84: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c80) {
            ctx->pc = 0x373C90u;
            goto label_373c90;
        }
    }
    ctx->pc = 0x373C88u;
    // 0x373c88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x373C88u;
    {
        const bool branch_taken_0x373c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C88u;
        // 0x373c8c: 0x340285c0  ori         $v0, $zero, 0x85C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c88) {
            ctx->pc = 0x373CE0u;
            goto label_373ce0;
        }
    }
    ctx->pc = 0x373C90u;
label_373c90:
    // 0x373c90: 0x240761a8  addiu       $a3, $zero, 0x61A8
    ctx->pc = 0x373c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x373c94: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x373c94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x373c98: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x373c9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x373c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x373ca0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x373CA0u;
    {
        const bool branch_taken_0x373ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373ca0) {
            ctx->pc = 0x373CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373CA0u;
            // 0x373ca4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x373CA8u;
            goto label_373ca8;
        }
    }
    ctx->pc = 0x373CA8u;
label_373ca8:
    // 0x373ca8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x373ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373cac: 0x340885e4  ori         $t0, $zero, 0x85E4
    ctx->pc = 0x373cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34276);
    // 0x373cb0: 0x1012  mflo        $v0
    ctx->pc = 0x373cb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x373cb4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x373cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x373cb8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x373cb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x373cbc: 0x1012  mflo        $v0
    ctx->pc = 0x373cbcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x373cc0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x373cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x373cc4: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x373cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x373cc8: 0x24420fff  addiu       $v0, $v0, 0xFFF
    ctx->pc = 0x373cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x373ccc: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x373cccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x373cd0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x373cd0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x373cd4: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x373cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x373cd8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x373cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x373cdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x373cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_373ce0:
    // 0x373ce0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x373ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x373ce4: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x373ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x373ce8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x373ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x373cec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x373cf0: 0xc0c7238  jal         func_31C8E0
    ctx->pc = 0x373CF0u;
    SET_GPR_U32(ctx, 31, 0x373CF8u);
    ctx->pc = 0x373CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CF0u;
    // 0x373cf4: 0x26064210  addiu       $a2, $s0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C8E0u, 0x373CF0u, 0x373CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CF8u;
label_373cf8:
    // 0x373cf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x373CF8u;
    {
        const bool branch_taken_0x373cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373CF8u;
        // 0x373cfc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373cf8) {
            ctx->pc = 0x373D2Cu;
            goto label_373d2c;
        }
    }
    ctx->pc = 0x373D00u;
    // 0x373d00: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x373d04: 0xc0ca5ea  jal         func_3297A8
    ctx->pc = 0x373D04u;
    SET_GPR_U32(ctx, 31, 0x373D0Cu);
    ctx->pc = 0x373D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D04u;
    // 0x373d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297A8u, 0x373D04u, 0x373D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D0Cu;
label_373d0c:
    // 0x373d0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x373d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_373d10:
    // 0x373d10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x373d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x373d14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373D14u;
    {
        const bool branch_taken_0x373d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D14u;
        // 0x373d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373d14) {
            ctx->pc = 0x373D30u;
            goto label_373d30;
        }
    }
    ctx->pc = 0x373D1Cu;
    // 0x373d1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x373d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x373d20: 0xc0c724a  jal         func_31C928
    ctx->pc = 0x373D20u;
    SET_GPR_U32(ctx, 31, 0x373D28u);
    ctx->pc = 0x373D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D20u;
    // 0x373d24: 0x26054210  addiu       $a1, $s0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C928u, 0x373D20u, 0x373D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D28u;
label_373d28:
    // 0x373d28: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x373d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_373d2c:
    // 0x373d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373d30:
    // 0x373d30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x373D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D3Cu;
        // 0x373d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373D44u;
    // 0x373d44: 0x0  nop
    ctx->pc = 0x373d44u;
    // NOP
    ctx->pc = 0x373d48u;
}
