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

// Function: func_002FACA8
// Address: 0x2faca8 - 0x2fb020
void func_002FACA8_0x2faca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FACA8_0x2faca8");
#endif

    switch (ctx->pc) {
        case 0x2facf4u: goto label_2facf4;
        case 0x2fad10u: goto label_2fad10;
        case 0x2fad2cu: goto label_2fad2c;
        case 0x2fad48u: goto label_2fad48;
        case 0x2fad64u: goto label_2fad64;
        case 0x2fad80u: goto label_2fad80;
        case 0x2fad9cu: goto label_2fad9c;
        case 0x2fadb8u: goto label_2fadb8;
        case 0x2fadd4u: goto label_2fadd4;
        case 0x2fadf0u: goto label_2fadf0;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae28u: goto label_2fae28;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae7cu: goto label_2fae7c;
        case 0x2fae98u: goto label_2fae98;
        case 0x2faeb4u: goto label_2faeb4;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faf08u: goto label_2faf08;
        case 0x2faf24u: goto label_2faf24;
        case 0x2faf40u: goto label_2faf40;
        case 0x2faf5cu: goto label_2faf5c;
        case 0x2faf78u: goto label_2faf78;
        case 0x2faf94u: goto label_2faf94;
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fb004u: goto label_2fb004;
        default: break;
    }

    ctx->pc = 0x2faca8u;

    // 0x2faca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2facac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2facacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2facb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2facb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2facb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2facb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2facb8: 0x2e020027  sltiu       $v0, $s0, 0x27
    ctx->pc = 0x2facb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x2facbc: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2FACBCu;
    {
        const bool branch_taken_0x2facbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACBCu;
        // 0x2facc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facbc) {
            ctx->pc = 0x2FB00Cu;
            goto label_2fb00c;
        }
    }
    ctx->pc = 0x2FACC4u;
    // 0x2facc4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2facc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2facc8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2facc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2faccc: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x2facccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
    // 0x2facd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2facd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2facd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2facd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2facd8: 0x800008  jr          $a0
    ctx->pc = 0x2FACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FACE0u: goto label_2face0;
            case 0x2FACFCu: goto label_2facfc;
            case 0x2FAD18u: goto label_2fad18;
            case 0x2FAD34u: goto label_2fad34;
            case 0x2FAD50u: goto label_2fad50;
            case 0x2FAD6Cu: goto label_2fad6c;
            case 0x2FAD88u: goto label_2fad88;
            case 0x2FADA4u: goto label_2fada4;
            case 0x2FADC0u: goto label_2fadc0;
            case 0x2FADDCu: goto label_2faddc;
            case 0x2FADF8u: goto label_2fadf8;
            case 0x2FAE14u: goto label_2fae14;
            case 0x2FAE30u: goto label_2fae30;
            case 0x2FAE4Cu: goto label_2fae4c;
            case 0x2FAE68u: goto label_2fae68;
            case 0x2FAE84u: goto label_2fae84;
            case 0x2FAEA0u: goto label_2faea0;
            case 0x2FAEBCu: goto label_2faebc;
            case 0x2FAED8u: goto label_2faed8;
            case 0x2FAEF4u: goto label_2faef4;
            case 0x2FAF10u: goto label_2faf10;
            case 0x2FAF2Cu: goto label_2faf2c;
            case 0x2FAF48u: goto label_2faf48;
            case 0x2FAF64u: goto label_2faf64;
            case 0x2FAF80u: goto label_2faf80;
            case 0x2FAF9Cu: goto label_2faf9c;
            case 0x2FAFB8u: goto label_2fafb8;
            case 0x2FAFD4u: goto label_2fafd4;
            case 0x2FAFF0u: goto label_2faff0;
            case 0x2FB00Cu: goto label_2fb00c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FACE0u;
label_2face0:
    // 0x2face0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2face4: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2face8: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2face8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2facec: 0xc0bfe9a  jal         func_2FFA68
    ctx->pc = 0x2FACECu;
    SET_GPR_U32(ctx, 31, 0x2FACF4u);
    ctx->pc = 0x2FACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACECu;
    // 0x2facf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFA68u, 0x2FACECu, 0x2FACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACF4u;
label_2facf4:
    // 0x2facf4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2FACF4u;
    {
        const bool branch_taken_0x2facf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACF4u;
        // 0x2facf8: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facf4) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FACFCu;
label_2facfc:
    // 0x2facfc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2facfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad00: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad04: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad08: 0xc0bfea4  jal         func_2FFA90
    ctx->pc = 0x2FAD08u;
    SET_GPR_U32(ctx, 31, 0x2FAD10u);
    ctx->pc = 0x2FAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD08u;
    // 0x2fad0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFA90u, 0x2FAD08u, 0x2FAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD10u;
label_2fad10:
    // 0x2fad10: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2FAD10u;
    {
        const bool branch_taken_0x2fad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD10u;
        // 0x2fad14: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad10) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAD18u;
label_2fad18:
    // 0x2fad18: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad1c: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad20: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad24: 0xc0bfeb4  jal         func_2FFAD0
    ctx->pc = 0x2FAD24u;
    SET_GPR_U32(ctx, 31, 0x2FAD2Cu);
    ctx->pc = 0x2FAD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD24u;
    // 0x2fad28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAD0u, 0x2FAD24u, 0x2FAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD2Cu;
label_2fad2c:
    // 0x2fad2c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2FAD2Cu;
    {
        const bool branch_taken_0x2fad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD2Cu;
        // 0x2fad30: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad2c) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAD34u;
label_2fad34:
    // 0x2fad34: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fad34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad38: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad3c: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad40: 0xc0bfec4  jal         func_2FFB10
    ctx->pc = 0x2FAD40u;
    SET_GPR_U32(ctx, 31, 0x2FAD48u);
    ctx->pc = 0x2FAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD40u;
    // 0x2fad44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFB10u, 0x2FAD40u, 0x2FAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD48u;
label_2fad48:
    // 0x2fad48: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2FAD48u;
    {
        const bool branch_taken_0x2fad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD48u;
        // 0x2fad4c: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad48) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAD50u;
label_2fad50:
    // 0x2fad50: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad54: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad58: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad5c: 0xc0bfece  jal         func_2FFB38
    ctx->pc = 0x2FAD5Cu;
    SET_GPR_U32(ctx, 31, 0x2FAD64u);
    ctx->pc = 0x2FAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD5Cu;
    // 0x2fad60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFB38u, 0x2FAD5Cu, 0x2FAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD64u;
label_2fad64:
    // 0x2fad64: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2FAD64u;
    {
        const bool branch_taken_0x2fad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD64u;
        // 0x2fad68: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad64) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAD6Cu;
label_2fad6c:
    // 0x2fad6c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad70: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad74: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad78: 0xc0bfee0  jal         func_2FFB80
    ctx->pc = 0x2FAD78u;
    SET_GPR_U32(ctx, 31, 0x2FAD80u);
    ctx->pc = 0x2FAD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD78u;
    // 0x2fad7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFB80u, 0x2FAD78u, 0x2FAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD80u;
label_2fad80:
    // 0x2fad80: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2FAD80u;
    {
        const bool branch_taken_0x2fad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD80u;
        // 0x2fad84: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad80) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAD88u;
label_2fad88:
    // 0x2fad88: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fad88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fad8c: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fad90: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fad94: 0xc0bfef4  jal         func_2FFBD0
    ctx->pc = 0x2FAD94u;
    SET_GPR_U32(ctx, 31, 0x2FAD9Cu);
    ctx->pc = 0x2FAD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD94u;
    // 0x2fad98: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFBD0u, 0x2FAD94u, 0x2FAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD9Cu;
label_2fad9c:
    // 0x2fad9c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2FAD9Cu;
    {
        const bool branch_taken_0x2fad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD9Cu;
        // 0x2fada0: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad9c) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FADA4u;
label_2fada4:
    // 0x2fada4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fada4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fada8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fadac: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fadacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fadb0: 0xc0bfefe  jal         func_2FFBF8
    ctx->pc = 0x2FADB0u;
    SET_GPR_U32(ctx, 31, 0x2FADB8u);
    ctx->pc = 0x2FADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADB0u;
    // 0x2fadb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFBF8u, 0x2FADB0u, 0x2FADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADB8u;
label_2fadb8:
    // 0x2fadb8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2FADB8u;
    {
        const bool branch_taken_0x2fadb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADB8u;
        // 0x2fadbc: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadb8) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FADC0u;
label_2fadc0:
    // 0x2fadc0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fadc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fadc4: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fadc8: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fadcc: 0xc0bff08  jal         func_2FFC20
    ctx->pc = 0x2FADCCu;
    SET_GPR_U32(ctx, 31, 0x2FADD4u);
    ctx->pc = 0x2FADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADCCu;
    // 0x2fadd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFC20u, 0x2FADCCu, 0x2FADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADD4u;
label_2fadd4:
    // 0x2fadd4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2FADD4u;
    {
        const bool branch_taken_0x2fadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD4u;
        // 0x2fadd8: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadd4) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FADDCu;
label_2faddc:
    // 0x2faddc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fade0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fade0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fade4: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fade8: 0xc0bff18  jal         func_2FFC60
    ctx->pc = 0x2FADE8u;
    SET_GPR_U32(ctx, 31, 0x2FADF0u);
    ctx->pc = 0x2FADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADE8u;
    // 0x2fadec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFC60u, 0x2FADE8u, 0x2FADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADF0u;
label_2fadf0:
    // 0x2fadf0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2FADF0u;
    {
        const bool branch_taken_0x2fadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADF0u;
        // 0x2fadf4: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadf0) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FADF8u;
label_2fadf8:
    // 0x2fadf8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fadfc: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae00: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae04: 0xc0bff22  jal         func_2FFC88
    ctx->pc = 0x2FAE04u;
    SET_GPR_U32(ctx, 31, 0x2FAE0Cu);
    ctx->pc = 0x2FAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE04u;
    // 0x2fae08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFC88u, 0x2FAE04u, 0x2FAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE0Cu;
label_2fae0c:
    // 0x2fae0c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2FAE0Cu;
    {
        const bool branch_taken_0x2fae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE0Cu;
        // 0x2fae10: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae0c) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAE14u;
label_2fae14:
    // 0x2fae14: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fae14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fae18: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae1c: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae20: 0xc0bff32  jal         func_2FFCC8
    ctx->pc = 0x2FAE20u;
    SET_GPR_U32(ctx, 31, 0x2FAE28u);
    ctx->pc = 0x2FAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE20u;
    // 0x2fae24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFCC8u, 0x2FAE20u, 0x2FAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE28u;
label_2fae28:
    // 0x2fae28: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2FAE28u;
    {
        const bool branch_taken_0x2fae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE28u;
        // 0x2fae2c: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae28) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAE30u;
label_2fae30:
    // 0x2fae30: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fae30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fae34: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fae34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae38: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae3c: 0xc0bff42  jal         func_2FFD08
    ctx->pc = 0x2FAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE44u);
    ctx->pc = 0x2FAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE3Cu;
    // 0x2fae40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD08u, 0x2FAE3Cu, 0x2FAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE44u;
label_2fae44:
    // 0x2fae44: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2FAE44u;
    {
        const bool branch_taken_0x2fae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE44u;
        // 0x2fae48: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae44) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAE4Cu;
label_2fae4c:
    // 0x2fae4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fae50: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae54: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae58: 0xc0bff52  jal         func_2FFD48
    ctx->pc = 0x2FAE58u;
    SET_GPR_U32(ctx, 31, 0x2FAE60u);
    ctx->pc = 0x2FAE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE58u;
    // 0x2fae5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD48u, 0x2FAE58u, 0x2FAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE60u;
label_2fae60:
    // 0x2fae60: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2FAE60u;
    {
        const bool branch_taken_0x2fae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE60u;
        // 0x2fae64: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae60) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAE68u;
label_2fae68:
    // 0x2fae68: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fae6c: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae70: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae74: 0xc0bff62  jal         func_2FFD88
    ctx->pc = 0x2FAE74u;
    SET_GPR_U32(ctx, 31, 0x2FAE7Cu);
    ctx->pc = 0x2FAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE74u;
    // 0x2fae78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD88u, 0x2FAE74u, 0x2FAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE7Cu;
label_2fae7c:
    // 0x2fae7c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2FAE7Cu;
    {
        const bool branch_taken_0x2fae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE7Cu;
        // 0x2fae80: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae7c) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAE84u;
label_2fae84:
    // 0x2fae84: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fae88: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fae8c: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fae90: 0xc0bff72  jal         func_2FFDC8
    ctx->pc = 0x2FAE90u;
    SET_GPR_U32(ctx, 31, 0x2FAE98u);
    ctx->pc = 0x2FAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE90u;
    // 0x2fae94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFDC8u, 0x2FAE90u, 0x2FAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE98u;
label_2fae98:
    // 0x2fae98: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FAE98u;
    {
        const bool branch_taken_0x2fae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE98u;
        // 0x2fae9c: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae98) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAEA0u;
label_2faea0:
    // 0x2faea0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faea4: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faea8: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faeac: 0xc0bff84  jal         func_2FFE10
    ctx->pc = 0x2FAEACu;
    SET_GPR_U32(ctx, 31, 0x2FAEB4u);
    ctx->pc = 0x2FAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEACu;
    // 0x2faeb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFE10u, 0x2FAEACu, 0x2FAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEB4u;
label_2faeb4:
    // 0x2faeb4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2FAEB4u;
    {
        const bool branch_taken_0x2faeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEB4u;
        // 0x2faeb8: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeb4) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAEBCu;
label_2faebc:
    // 0x2faebc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faec0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faec4: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faec8: 0xc0bff94  jal         func_2FFE50
    ctx->pc = 0x2FAEC8u;
    SET_GPR_U32(ctx, 31, 0x2FAED0u);
    ctx->pc = 0x2FAECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEC8u;
    // 0x2faecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFE50u, 0x2FAEC8u, 0x2FAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAED0u;
label_2faed0:
    // 0x2faed0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2FAED0u;
    {
        const bool branch_taken_0x2faed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAED0u;
        // 0x2faed4: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faed0) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAED8u;
label_2faed8:
    // 0x2faed8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faedc: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faee0: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faee4: 0xc0bffa4  jal         func_2FFE90
    ctx->pc = 0x2FAEE4u;
    SET_GPR_U32(ctx, 31, 0x2FAEECu);
    ctx->pc = 0x2FAEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEE4u;
    // 0x2faee8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFE90u, 0x2FAEE4u, 0x2FAEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEECu;
label_2faeec:
    // 0x2faeec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2FAEECu;
    {
        const bool branch_taken_0x2faeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEECu;
        // 0x2faef0: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeec) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAEF4u;
label_2faef4:
    // 0x2faef4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faef8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faefc: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf00: 0xc0bffb4  jal         func_2FFED0
    ctx->pc = 0x2FAF00u;
    SET_GPR_U32(ctx, 31, 0x2FAF08u);
    ctx->pc = 0x2FAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF00u;
    // 0x2faf04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFED0u, 0x2FAF00u, 0x2FAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF08u;
label_2faf08:
    // 0x2faf08: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2FAF08u;
    {
        const bool branch_taken_0x2faf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF08u;
        // 0x2faf0c: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf08) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF10u;
label_2faf10:
    // 0x2faf10: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faf14: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf18: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf1c: 0xc0bffc4  jal         func_2FFF10
    ctx->pc = 0x2FAF1Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF24u);
    ctx->pc = 0x2FAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF1Cu;
    // 0x2faf20: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFF10u, 0x2FAF1Cu, 0x2FAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF24u;
label_2faf24:
    // 0x2faf24: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2FAF24u;
    {
        const bool branch_taken_0x2faf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF24u;
        // 0x2faf28: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf24) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF2Cu;
label_2faf2c:
    // 0x2faf2c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faf30: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf34: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf38: 0xc0bffd4  jal         func_2FFF50
    ctx->pc = 0x2FAF38u;
    SET_GPR_U32(ctx, 31, 0x2FAF40u);
    ctx->pc = 0x2FAF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF38u;
    // 0x2faf3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFF50u, 0x2FAF38u, 0x2FAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF40u;
label_2faf40:
    // 0x2faf40: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2FAF40u;
    {
        const bool branch_taken_0x2faf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF40u;
        // 0x2faf44: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf40) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF48u;
label_2faf48:
    // 0x2faf48: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faf4c: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf50: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf54: 0xc0bffe4  jal         func_2FFF90
    ctx->pc = 0x2FAF54u;
    SET_GPR_U32(ctx, 31, 0x2FAF5Cu);
    ctx->pc = 0x2FAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF54u;
    // 0x2faf58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFF90u, 0x2FAF54u, 0x2FAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF5Cu;
label_2faf5c:
    // 0x2faf5c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2FAF5Cu;
    {
        const bool branch_taken_0x2faf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF5Cu;
        // 0x2faf60: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf5c) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF64u;
label_2faf64:
    // 0x2faf64: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faf68: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf6c: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf70: 0xc0bffee  jal         func_2FFFB8
    ctx->pc = 0x2FAF70u;
    SET_GPR_U32(ctx, 31, 0x2FAF78u);
    ctx->pc = 0x2FAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF70u;
    // 0x2faf74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFFB8u, 0x2FAF70u, 0x2FAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF78u;
label_2faf78:
    // 0x2faf78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2FAF78u;
    {
        const bool branch_taken_0x2faf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF78u;
        // 0x2faf7c: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf78) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF80u;
label_2faf80:
    // 0x2faf80: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faf84: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf88: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faf8c: 0xc0bfff8  jal         func_2FFFE0
    ctx->pc = 0x2FAF8Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF94u);
    ctx->pc = 0x2FAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF8Cu;
    // 0x2faf90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFFE0u, 0x2FAF8Cu, 0x2FAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF94u;
label_2faf94:
    // 0x2faf94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2FAF94u;
    {
        const bool branch_taken_0x2faf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF94u;
        // 0x2faf98: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf94) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAF9Cu;
label_2faf9c:
    // 0x2faf9c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fafa0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fafa4: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fafa8: 0xc0c0008  jal         func_300020
    ctx->pc = 0x2FAFA8u;
    SET_GPR_U32(ctx, 31, 0x2FAFB0u);
    ctx->pc = 0x2FAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFA8u;
    // 0x2fafac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300020u, 0x2FAFA8u, 0x2FAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFB0u;
label_2fafb0:
    // 0x2fafb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FAFB0u;
    {
        const bool branch_taken_0x2fafb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFB0u;
        // 0x2fafb4: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafb0) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAFB8u;
label_2fafb8:
    // 0x2fafb8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fafbc: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fafc0: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fafc4: 0xc0c0018  jal         func_300060
    ctx->pc = 0x2FAFC4u;
    SET_GPR_U32(ctx, 31, 0x2FAFCCu);
    ctx->pc = 0x2FAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFC4u;
    // 0x2fafc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300060u, 0x2FAFC4u, 0x2FAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFCCu;
label_2fafcc:
    // 0x2fafcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FAFCCu;
    {
        const bool branch_taken_0x2fafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFCCu;
        // 0x2fafd0: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafcc) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAFD4u;
label_2fafd4:
    // 0x2fafd4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2fafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2fafd8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2fafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2fafdc: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2fafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2fafe0: 0xc0c0022  jal         func_300088
    ctx->pc = 0x2FAFE0u;
    SET_GPR_U32(ctx, 31, 0x2FAFE8u);
    ctx->pc = 0x2FAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFE0u;
    // 0x2fafe4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300088u, 0x2FAFE0u, 0x2FAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAFE8u;
label_2fafe8:
    // 0x2fafe8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FAFE8u;
    {
        const bool branch_taken_0x2fafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE8u;
        // 0x2fafec: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafe8) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAFF0u;
label_2faff0:
    // 0x2faff0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2faff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2faff4: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faff8: 0x2484b7c0  addiu       $a0, $a0, -0x4840
    ctx->pc = 0x2faff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    // 0x2faffc: 0xc0c002c  jal         func_3000B0
    ctx->pc = 0x2FAFFCu;
    SET_GPR_U32(ctx, 31, 0x2FB004u);
    ctx->pc = 0x2FB000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFFCu;
    // 0x2fb000: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3000B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3000B0u, 0x2FAFFCu, 0x2FB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB004u;
label_2fb004:
    // 0x2fb004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB004u;
    {
        const bool branch_taken_0x2fb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB004u;
        // 0x2fb008: 0xa0500102  sb          $s0, 0x102($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 258), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb004) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FB00Cu;
label_2fb00c:
    // 0x2fb00c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb010:
    // 0x2fb010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb018: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB018u;
        // 0x2fb01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB020u;
}
