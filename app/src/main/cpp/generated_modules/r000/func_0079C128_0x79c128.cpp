#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C128
// Address: 0x79c128 - 0x79c268
void func_0079C128_0x79c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C128_0x79c128");
#endif

    switch (ctx->pc) {
        case 0x79c168u: goto label_79c168;
        case 0x79c1a0u: goto label_79c1a0;
        case 0x79c1b0u: goto label_79c1b0;
        case 0x79c1bcu: goto label_79c1bc;
        case 0x79c1d0u: goto label_79c1d0;
        case 0x79c1dcu: goto label_79c1dc;
        case 0x79c1e8u: goto label_79c1e8;
        case 0x79c1f4u: goto label_79c1f4;
        case 0x79c204u: goto label_79c204;
        case 0x79c214u: goto label_79c214;
        case 0x79c234u: goto label_79c234;
        case 0x79c244u: goto label_79c244;
        case 0x79c250u: goto label_79c250;
        default: break;
    }

    ctx->pc = 0x79c128u;

    // 0x79c128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c12c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79c130: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x79c130u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x79c134: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79c138: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x79c138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79c13c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79c13cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79c140: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79c144: 0x441003f  bgez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79C144u;
    {
        const bool branch_taken_0x79c144 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C144u;
        // 0x79c148: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c144) {
            ctx->pc = 0x79C244u;
            goto label_79c244;
        }
    }
    ctx->pc = 0x79C14Cu;
    // 0x79c14c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c150: 0x24051030  addiu       $a1, $zero, 0x1030
    ctx->pc = 0x79c150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
    // 0x79c154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c15c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c160: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C160u;
    SET_GPR_U32(ctx, 31, 0x79C168u);
    ctx->pc = 0x79C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C160u;
    // 0x79c164: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C160u, 0x79C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C168u;
label_79c168:
    // 0x79c168: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79c168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79c16c: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79c170: 0x84630bec  lh          $v1, 0xBEC($v1)
    ctx->pc = 0x79c170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79c174: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C174u;
    {
        const bool branch_taken_0x79c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C174u;
        // 0x79c178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c174) {
            ctx->pc = 0x79C184u;
            goto label_79c184;
        }
    }
    ctx->pc = 0x79C17Cu;
    // 0x79c17c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x79C17Cu;
    {
        const bool branch_taken_0x79c17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C17Cu;
        // 0x79c180: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c17c) {
            ctx->pc = 0x79C23Cu;
            goto label_79c23c;
        }
    }
    ctx->pc = 0x79C184u;
label_79c184:
    // 0x79c184: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c18c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c194: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79c194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c198: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C198u;
    SET_GPR_U32(ctx, 31, 0x79C1A0u);
    ctx->pc = 0x79C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C198u;
    // 0x79c19c: 0x24051031  addiu       $a1, $zero, 0x1031 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4145));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C198u, 0x79C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1A0u;
label_79c1a0:
    // 0x79c1a0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79c1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79c1a4: 0x2610c900  addiu       $s0, $s0, -0x3700
    ctx->pc = 0x79c1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
    // 0x79c1a8: 0xc1e6496  jal         func_799258
    ctx->pc = 0x79C1A8u;
    SET_GPR_U32(ctx, 31, 0x79C1B0u);
    ctx->pc = 0x79C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1A8u;
    // 0x79c1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799258u, 0x79C1A8u, 0x79C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1B0u;
label_79c1b0:
    // 0x79c1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1b4: 0xc1e6500  jal         func_799400
    ctx->pc = 0x79C1B4u;
    SET_GPR_U32(ctx, 31, 0x79C1BCu);
    ctx->pc = 0x79C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1B4u;
    // 0x79c1b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799400u, 0x79C1B4u, 0x79C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1BCu;
label_79c1bc:
    // 0x79c1bc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79c1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79c1c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79c1c4: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79c1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79c1c8: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79C1C8u;
    SET_GPR_U32(ctx, 31, 0x79C1D0u);
    ctx->pc = 0x79C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1C8u;
    // 0x79c1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79C1C8u, 0x79C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1D0u;
label_79c1d0:
    // 0x79c1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1d4: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79C1D4u;
    SET_GPR_U32(ctx, 31, 0x79C1DCu);
    ctx->pc = 0x79C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1D4u;
    // 0x79c1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79C1D4u, 0x79C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1DCu;
label_79c1dc:
    // 0x79c1dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79c1e0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79C1E0u;
    SET_GPR_U32(ctx, 31, 0x79C1E8u);
    ctx->pc = 0x79C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1E0u;
    // 0x79c1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79C1E0u, 0x79C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1E8u;
label_79c1e8:
    // 0x79c1e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79c1ec: 0xc07db4e  jal         func_1F6D38
    ctx->pc = 0x79C1ECu;
    SET_GPR_U32(ctx, 31, 0x79C1F4u);
    ctx->pc = 0x79C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1ECu;
    // 0x79c1f0: 0x24848240  addiu       $a0, $a0, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6D38u, 0x79C1ECu, 0x79C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1F4u;
label_79c1f4:
    // 0x79c1f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79c1f8: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79c1fc: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x79C1FCu;
    SET_GPR_U32(ctx, 31, 0x79C204u);
    ctx->pc = 0x79C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1FCu;
    // 0x79c200: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x79C1FCu, 0x79C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C204u;
label_79c204:
    // 0x79c204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c20c: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79C20Cu;
    SET_GPR_U32(ctx, 31, 0x79C214u);
    ctx->pc = 0x79C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C20Cu;
    // 0x79c210: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79C20Cu, 0x79C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C214u;
label_79c214:
    // 0x79c214: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79c218: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79c21c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c220: 0x8e252f84  lw          $a1, 0x2F84($s1)
    ctx->pc = 0x79c220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c224: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c228: 0xae437a8c  sw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79c228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
    // 0x79c22c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C22Cu;
    SET_GPR_U32(ctx, 31, 0x79C234u);
    ctx->pc = 0x79C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C22Cu;
    // 0x79c230: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C22Cu, 0x79C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C234u;
label_79c234:
    // 0x79c234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79C234u;
    {
        const bool branch_taken_0x79c234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C234u;
        // 0x79c238: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c234) {
            ctx->pc = 0x79C248u;
            goto label_79c248;
        }
    }
    ctx->pc = 0x79C23Cu;
label_79c23c:
    // 0x79c23c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C23Cu;
    SET_GPR_U32(ctx, 31, 0x79C244u);
    ctx->pc = 0x79C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C23Cu;
    // 0x79c240: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C23Cu, 0x79C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C244u;
label_79c244:
    // 0x79c244: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79c248:
    // 0x79c248: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C248u;
    SET_GPR_U32(ctx, 31, 0x79C250u);
    ctx->pc = 0x79C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C248u;
    // 0x79c24c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C248u, 0x79C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C250u;
label_79c250:
    // 0x79c250: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79c250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c254: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79c254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79c258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c260: 0x3e00008  jr          $ra
    ctx->pc = 0x79C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C260u;
        // 0x79c264: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C268u;
}
} // namespace gh_r000
