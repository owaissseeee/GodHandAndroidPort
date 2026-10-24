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
// Function: func_0079BBA8
// Address: 0x79bba8 - 0x79bd80
void func_0079BBA8_0x79bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BBA8_0x79bba8");
#endif

    switch (ctx->pc) {
        case 0x79bbf0u: goto label_79bbf0;
        case 0x79bc04u: goto label_79bc04;
        case 0x79bc24u: goto label_79bc24;
        case 0x79bc30u: goto label_79bc30;
        case 0x79bc3cu: goto label_79bc3c;
        case 0x79bc48u: goto label_79bc48;
        case 0x79bc54u: goto label_79bc54;
        case 0x79bc60u: goto label_79bc60;
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc80u: goto label_79bc80;
        case 0x79bcb0u: goto label_79bcb0;
        case 0x79bcd4u: goto label_79bcd4;
        case 0x79bce4u: goto label_79bce4;
        case 0x79bcf4u: goto label_79bcf4;
        case 0x79bd00u: goto label_79bd00;
        case 0x79bd08u: goto label_79bd08;
        case 0x79bd18u: goto label_79bd18;
        case 0x79bd34u: goto label_79bd34;
        case 0x79bd3cu: goto label_79bd3c;
        case 0x79bd48u: goto label_79bd48;
        case 0x79bd54u: goto label_79bd54;
        default: break;
    }

    ctx->pc = 0x79bba8u;

    // 0x79bba8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79bbac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79bbb0: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x79bbb0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x79bbb4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79bbb8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79bbbc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79bbc0: 0x3c160400  lui         $s6, 0x400
    ctx->pc = 0x79bbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1024 << 16));
    // 0x79bbc4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79bbc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79bbcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79bbd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79bbd4: 0x8ea39b70  lw          $v1, -0x6490($s5)
    ctx->pc = 0x79bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x79bbd8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79bbdc: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x79bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x79bbe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBE0u;
    {
        const bool branch_taken_0x79bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBE0u;
        // 0x79bbe4: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbe0) {
            ctx->pc = 0x79BBF0u;
            goto label_79bbf0;
        }
    }
    ctx->pc = 0x79BBE8u;
    // 0x79bbe8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79BBE8u;
    SET_GPR_U32(ctx, 31, 0x79BBF0u);
    ctx->pc = 0x79BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBE8u;
    // 0x79bbec: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BBE8u, 0x79BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBF0u;
label_79bbf0:
    // 0x79bbf0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79bbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbf8: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x79bbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x79bbfc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79BBFCu;
    SET_GPR_U32(ctx, 31, 0x79BC04u);
    ctx->pc = 0x79BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBFCu;
    // 0x79bc00: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79BBFCu, 0x79BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC04u;
label_79bc04:
    // 0x79bc04: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x79bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79bc08: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x79BC08u;
    {
        const bool branch_taken_0x79bc08 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC08u;
        // 0x79bc0c: 0x8ea39b70  lw          $v1, -0x6490($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc08) {
            ctx->pc = 0x79BC98u;
            goto label_79bc98;
        }
    }
    ctx->pc = 0x79BC10u;
    // 0x79bc10: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79bc10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79bc14: 0x2691ea60  addiu       $s1, $s4, -0x15A0
    ctx->pc = 0x79bc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x79bc18: 0x2610c900  addiu       $s0, $s0, -0x3700
    ctx->pc = 0x79bc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
    // 0x79bc1c: 0xc1e6496  jal         func_799258
    ctx->pc = 0x79BC1Cu;
    SET_GPR_U32(ctx, 31, 0x79BC24u);
    ctx->pc = 0x79BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC1Cu;
    // 0x79bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799258u, 0x79BC1Cu, 0x79BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC24u;
label_79bc24:
    // 0x79bc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc28: 0xc1e6500  jal         func_799400
    ctx->pc = 0x79BC28u;
    SET_GPR_U32(ctx, 31, 0x79BC30u);
    ctx->pc = 0x79BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC28u;
    // 0x79bc2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799400u, 0x79BC28u, 0x79BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC30u;
label_79bc30:
    // 0x79bc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc34: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79BC34u;
    SET_GPR_U32(ctx, 31, 0x79BC3Cu);
    ctx->pc = 0x79BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC34u;
    // 0x79bc38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79BC34u, 0x79BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC3Cu;
label_79bc3c:
    // 0x79bc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79bc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc40: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79BC40u;
    SET_GPR_U32(ctx, 31, 0x79BC48u);
    ctx->pc = 0x79BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC40u;
    // 0x79bc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79BC40u, 0x79BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC48u;
label_79bc48:
    // 0x79bc48: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79bc4c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79BC4Cu;
    SET_GPR_U32(ctx, 31, 0x79BC54u);
    ctx->pc = 0x79BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC4Cu;
    // 0x79bc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79BC4Cu, 0x79BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC54u;
label_79bc54:
    // 0x79bc54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79bc58: 0xc07db4e  jal         func_1F6D38
    ctx->pc = 0x79BC58u;
    SET_GPR_U32(ctx, 31, 0x79BC60u);
    ctx->pc = 0x79BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC58u;
    // 0x79bc5c: 0x24848240  addiu       $a0, $a0, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6D38u, 0x79BC58u, 0x79BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC60u;
label_79bc60:
    // 0x79bc60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79bc64: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79bc68: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x79BC68u;
    SET_GPR_U32(ctx, 31, 0x79BC70u);
    ctx->pc = 0x79BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC68u;
    // 0x79bc6c: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x79BC68u, 0x79BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC70u;
label_79bc70:
    // 0x79bc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bc74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc78: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79BC78u;
    SET_GPR_U32(ctx, 31, 0x79BC80u);
    ctx->pc = 0x79BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC78u;
    // 0x79bc7c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79BC78u, 0x79BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC80u;
label_79bc80:
    // 0x79bc80: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79bc84: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79bc88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bc8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79bc90: 0xae437a8c  sw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
    // 0x79bc94: 0x8ea39b70  lw          $v1, -0x6490($s5)
    ctx->pc = 0x79bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
label_79bc98:
    // 0x79bc98: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79bc9c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x79bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x79bca0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79BCA0u;
    {
        const bool branch_taken_0x79bca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCA0u;
        // 0x79bca4: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bca0) {
            ctx->pc = 0x79BCE8u;
            goto label_79bce8;
        }
    }
    ctx->pc = 0x79BCA8u;
    // 0x79bca8: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x79BCA8u;
    SET_GPR_U32(ctx, 31, 0x79BCB0u);
    ctx->pc = 0x79BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCA8u;
    // 0x79bcac: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x79BCA8u, 0x79BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCB0u;
label_79bcb0:
    // 0x79bcb0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79bcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bcb8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79bcbc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79bcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79bcc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bcc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bcc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79bcc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bcc8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79bccc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79BCCCu;
    SET_GPR_U32(ctx, 31, 0x79BCD4u);
    ctx->pc = 0x79BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCCCu;
    // 0x79bcd0: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BCCCu, 0x79BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCD4u;
label_79bcd4:
    // 0x79bcd4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79bcd8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79bcdc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BCDCu;
    SET_GPR_U32(ctx, 31, 0x79BCE4u);
    ctx->pc = 0x79BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCDCu;
    // 0x79bce0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BCDCu, 0x79BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCE4u;
label_79bce4:
    // 0x79bce4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79bce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79bce8:
    // 0x79bce8: 0x8e04ca70  lw          $a0, -0x3590($s0)
    ctx->pc = 0x79bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953584)));
    // 0x79bcec: 0xc07cd72  jal         func_1F35C8
    ctx->pc = 0x79BCECu;
    SET_GPR_U32(ctx, 31, 0x79BCF4u);
    ctx->pc = 0x79BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCECu;
    // 0x79bcf0: 0x24842a10  addiu       $a0, $a0, 0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F35C8u, 0x79BCECu, 0x79BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCF4u;
label_79bcf4:
    // 0x79bcf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79BCF4u;
    {
        const bool branch_taken_0x79bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF4u;
        // 0x79bcf8: 0x8e03ca70  lw          $v1, -0x3590($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcf4) {
            ctx->pc = 0x79BD1Cu;
            goto label_79bd1c;
        }
    }
    ctx->pc = 0x79BCFCu;
    // 0x79bcfc: 0x0  nop
    ctx->pc = 0x79bcfcu;
    // NOP
label_79bd00:
    // 0x79bd00: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x79BD00u;
    SET_GPR_U32(ctx, 31, 0x79BD08u);
    ctx->pc = 0x79BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD00u;
    // 0x79bd04: 0x24842a10  addiu       $a0, $a0, 0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x79BD00u, 0x79BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD08u;
label_79bd08:
    // 0x79bd08: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79bd0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bd10: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BD10u;
    SET_GPR_U32(ctx, 31, 0x79BD18u);
    ctx->pc = 0x79BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD10u;
    // 0x79bd14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BD10u, 0x79BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD18u;
label_79bd18:
    // 0x79bd18: 0x8e03ca70  lw          $v1, -0x3590($s0)
    ctx->pc = 0x79bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953584)));
label_79bd1c:
    // 0x79bd1c: 0x9c622a64  lwu         $v0, 0x2A64($v1)
    ctx->pc = 0x79bd1cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10852)));
    // 0x79bd20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79bd24: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x79BD24u;
    {
        const bool branch_taken_0x79bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bd24) {
            ctx->pc = 0x79BD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD24u;
            // 0x79bd28: 0x8e04ca70  lw          $a0, -0x3590($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd00;
        }
    }
    ctx->pc = 0x79BD2Cu;
    // 0x79bd2c: 0xc0b1286  jal         func_2C4A18
    ctx->pc = 0x79BD2Cu;
    SET_GPR_U32(ctx, 31, 0x79BD34u);
    ctx->pc = 0x79BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD2Cu;
    // 0x79bd30: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4A18u, 0x79BD2Cu, 0x79BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD34u;
label_79bd34:
    // 0x79bd34: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79BD34u;
    SET_GPR_U32(ctx, 31, 0x79BD3Cu);
    ctx->pc = 0x79BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD34u;
    // 0x79bd38: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BD34u, 0x79BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD3Cu;
label_79bd3c:
    // 0x79bd3c: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x79bd40: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79BD40u;
    SET_GPR_U32(ctx, 31, 0x79BD48u);
    ctx->pc = 0x79BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD40u;
    // 0x79bd44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79BD40u, 0x79BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD48u;
label_79bd48:
    // 0x79bd48: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x79bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79bd4c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79BD4Cu;
    SET_GPR_U32(ctx, 31, 0x79BD54u);
    ctx->pc = 0x79BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD4Cu;
    // 0x79bd50: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BD4Cu, 0x79BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD54u;
label_79bd54:
    // 0x79bd54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79bd58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79bd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79bd5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79bd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79bd60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79bd60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79bd64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79bd64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bd68: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79bd68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bd6c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79bd6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bd70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD74u;
        // 0x79bd78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD7Cu;
    // 0x79bd7c: 0x0  nop
    ctx->pc = 0x79bd7cu;
    // NOP
    ctx->pc = 0x79bd80u;
}
} // namespace gh_r000
