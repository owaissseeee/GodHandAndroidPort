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

// Function: func_00380048
// Address: 0x380048 - 0x380138
void func_00380048_0x380048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380048_0x380048");
#endif

    switch (ctx->pc) {
        case 0x3800e4u: goto label_3800e4;
        case 0x380114u: goto label_380114;
        case 0x38012cu: goto label_38012c;
        default: break;
    }

    ctx->pc = 0x380048u;

    // 0x380048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38004c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x38004cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x380050: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x380050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x380054: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x380054u;
    {
        const bool branch_taken_0x380054 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x380058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380054u;
        // 0x380058: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380054) {
            ctx->pc = 0x380074u;
            goto label_380074;
        }
    }
    ctx->pc = 0x38005Cu;
    // 0x38005c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x38005cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x380060: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x380060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x380064: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x380064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x380068: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x380068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x38006c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38006Cu;
    {
        const bool branch_taken_0x38006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38006Cu;
        // 0x380070: 0x24470049  addiu       $a3, $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38006c) {
            ctx->pc = 0x380090u;
            goto label_380090;
        }
    }
    ctx->pc = 0x380074u;
label_380074:
    // 0x380074: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x380074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x380078: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380078u;
    {
        const bool branch_taken_0x380078 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x38007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380078u;
        // 0x38007c: 0x24870319  addiu       $a3, $a0, 0x319 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 793));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380078) {
            ctx->pc = 0x380090u;
            goto label_380090;
        }
    }
    ctx->pc = 0x380080u;
    // 0x380080: 0x24870471  addiu       $a3, $a0, 0x471
    ctx->pc = 0x380080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1137));
    // 0x380084: 0x24830371  addiu       $v1, $a0, 0x371
    ctx->pc = 0x380084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 881));
    // 0x380088: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x380088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x38008c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x38008cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_380090:
    // 0x380090: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x380090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x380094: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x380094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x380098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380098u;
    {
        const bool branch_taken_0x380098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380098u;
        // 0x38009c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380098) {
            ctx->pc = 0x3800ACu;
            goto label_3800ac;
        }
    }
    ctx->pc = 0x3800A0u;
    // 0x3800a0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x3800a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3800a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3800A4u;
    {
        const bool branch_taken_0x3800a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3800A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800A4u;
        // 0x3800a8: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3800a4) {
            ctx->pc = 0x38012Cu;
            goto label_38012c;
        }
    }
    ctx->pc = 0x3800ACu;
label_3800ac:
    // 0x3800ac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3800acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3800b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3800b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3800b4: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3800B4u;
    {
        const bool branch_taken_0x3800b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3800b4) {
            ctx->pc = 0x3800B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3800B4u;
            // 0x3800b8: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3800ECu;
            goto label_3800ec;
        }
    }
    ctx->pc = 0x3800BCu;
    // 0x3800bc: 0x24c3fff8  addiu       $v1, $a2, -0x8
    ctx->pc = 0x3800bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3800c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3800c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3800c4: 0x244228b0  addiu       $v0, $v0, 0x28B0
    ctx->pc = 0x3800c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x3800c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3800c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3800cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3800ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3800d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3800d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3800d4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x3800d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3800d8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3800d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3800dc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3800DCu;
    SET_GPR_U32(ctx, 31, 0x3800E4u);
    ctx->pc = 0x3800E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3800DCu;
    // 0x3800e0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3800DCu, 0x3800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3800E4u;
label_3800e4:
    // 0x3800e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3800E4u;
    {
        const bool branch_taken_0x3800e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3800E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800E4u;
        // 0x3800e8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3800e4) {
            ctx->pc = 0x380118u;
            goto label_380118;
        }
    }
    ctx->pc = 0x3800ECu;
label_3800ec:
    // 0x3800ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3800ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3800f0: 0x246328a0  addiu       $v1, $v1, 0x28A0
    ctx->pc = 0x3800f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10400));
    // 0x3800f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3800f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3800f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3800fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3800fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x380100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x380100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x380104: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x380104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x380108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x380108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38010c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38010Cu;
    SET_GPR_U32(ctx, 31, 0x380114u);
    ctx->pc = 0x380110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38010Cu;
    // 0x380110: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38010Cu, 0x380114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380114u;
label_380114:
    // 0x380114: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x380114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_380118:
    // 0x380118: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38011c: 0x24e7c328  addiu       $a3, $a3, -0x3CD8
    ctx->pc = 0x38011cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951720));
    // 0x380120: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x380120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x380124: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380124u;
    SET_GPR_U32(ctx, 31, 0x38012Cu);
    ctx->pc = 0x380128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380124u;
    // 0x380128: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380124u, 0x38012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38012Cu;
label_38012c:
    // 0x38012c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380130: 0x3e00008  jr          $ra
    ctx->pc = 0x380130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380130u;
        // 0x380134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380138u;
}
