#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79a918 - 0x79aaa0
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79a918");
#endif

    switch (ctx->pc) {
        case 0x79a960u: goto label_79a960;
        case 0x79a990u: goto label_79a990;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa84u: goto label_79aa84;
        default: break;
    }

    ctx->pc = 0x79a918u;

    // 0x79a918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a91c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a924: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a928: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79a928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79a92c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a930: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79a930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79a934: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79a934u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79a938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a93c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79a93cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79a940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a948: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a94c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A94Cu;
    {
        const bool branch_taken_0x79a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A94Cu;
        // 0x79a950: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a94c) {
            ctx->pc = 0x79A988u;
            goto label_79a988;
        }
    }
    ctx->pc = 0x79A954u;
    // 0x79a954: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a958: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a95c: 0x0  nop
    ctx->pc = 0x79a95cu;
    // NOP
label_79a960:
    // 0x79a960: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a964: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a968: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a96c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a970: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A974u;
    {
        const bool branch_taken_0x79a974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A974u;
        // 0x79a978: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a974) {
            ctx->pc = 0x79A988u;
            goto label_79a988;
        }
    }
    ctx->pc = 0x79A97Cu;
    // 0x79a97c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a980: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A980u;
    {
        const bool branch_taken_0x79a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a980) {
            ctx->pc = 0x79A984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A980u;
            // 0x79a984: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a960;
        }
    }
    ctx->pc = 0x79A988u;
label_79a988:
    // 0x79a988: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A988u;
    SET_GPR_U32(ctx, 31, 0x79A990u);
    ctx->pc = 0x79A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A988u;
    // 0x79a98c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A988u, 0x79A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A990u;
label_79a990:
    // 0x79a990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a994: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79A994u;
    {
        const bool branch_taken_0x79a994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a994) {
            ctx->pc = 0x79A998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A994u;
            // 0x79a998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79A99Cu;
    // 0x79a99c: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79a9a0: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79a9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79a9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a9a8: 0x0  nop
    ctx->pc = 0x79a9a8u;
    // NOP
    // 0x79a9ac: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79a9acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a9b0: 0x0  nop
    ctx->pc = 0x79a9b0u;
    // NOP
    // 0x79a9b4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79A9B4u;
    {
        const bool branch_taken_0x79a9b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9b4) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A9BCu;
    // 0x79a9bc: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79a9bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a9c0: 0x0  nop
    ctx->pc = 0x79a9c0u;
    // NOP
    // 0x79a9c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79A9C4u;
    {
        const bool branch_taken_0x79a9c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C4u;
        // 0x79a9c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c4) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A9CCu;
    // 0x79a9cc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a9ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a9d0: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79A9D0u;
    SET_GPR_U32(ctx, 31, 0x79A9D8u);
    ctx->pc = 0x79A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D0u;
    // 0x79a9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79A9D0u, 0x79A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79a9d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a9dc:
    // 0x79a9dc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79A9DCu;
    {
        const bool branch_taken_0x79a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9DCu;
        // 0x79a9e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9dc) {
            ctx->pc = 0x79AA84u;
            goto label_79aa84;
        }
    }
    ctx->pc = 0x79A9E4u;
    // 0x79a9e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79a9e8: 0x2442b040  addiu       $v0, $v0, -0x4FC0
    ctx->pc = 0x79a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946880));
    // 0x79a9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a9f4: 0x800008  jr          $a0
    ctx->pc = 0x79A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A9FCu: goto label_79a9fc;
            case 0x79AA0Cu: goto label_79aa0c;
            case 0x79AA1Cu: goto label_79aa1c;
            case 0x79AA2Cu: goto label_79aa2c;
            case 0x79AA3Cu: goto label_79aa3c;
            case 0x79AA50u: goto label_79aa50;
            case 0x79AA64u: goto label_79aa64;
            case 0x79AA78u: goto label_79aa78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79A9FCu;
    SET_GPR_U32(ctx, 31, 0x79AA04u);
    ctx->pc = 0x79AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9FCu;
    // 0x79aa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79A9FCu, 0x79AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA04u;
label_79aa04:
    // 0x79aa04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79AA04u;
    {
        const bool branch_taken_0x79aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA04u;
        // 0x79aa08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa04) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA0Cu;
label_79aa0c:
    // 0x79aa0c: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79AA0Cu;
    SET_GPR_U32(ctx, 31, 0x79AA14u);
    ctx->pc = 0x79AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA0Cu;
    // 0x79aa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79AA0Cu, 0x79AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA14u;
label_79aa14:
    // 0x79aa14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79AA14u;
    {
        const bool branch_taken_0x79aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA14u;
        // 0x79aa18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa14) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA1Cu;
label_79aa1c:
    // 0x79aa1c: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79AA1Cu;
    SET_GPR_U32(ctx, 31, 0x79AA24u);
    ctx->pc = 0x79AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA1Cu;
    // 0x79aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79AA1Cu, 0x79AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA24u;
label_79aa24:
    // 0x79aa24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79AA24u;
    {
        const bool branch_taken_0x79aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA24u;
        // 0x79aa28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa24) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA2Cu;
label_79aa2c:
    // 0x79aa2c: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79AA2Cu;
    SET_GPR_U32(ctx, 31, 0x79AA34u);
    ctx->pc = 0x79AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA2Cu;
    // 0x79aa30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79AA2Cu, 0x79AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79AA34u;
    {
        const bool branch_taken_0x79aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa34) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa40: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79AA40u;
    SET_GPR_U32(ctx, 31, 0x79AA48u);
    ctx->pc = 0x79AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA40u;
    // 0x79aa44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79AA40u, 0x79AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA48u;
label_79aa48:
    // 0x79aa48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79AA48u;
    {
        const bool branch_taken_0x79aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa48) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA50u;
label_79aa50:
    // 0x79aa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa54: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79AA54u;
    SET_GPR_U32(ctx, 31, 0x79AA5Cu);
    ctx->pc = 0x79AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA54u;
    // 0x79aa58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79AA54u, 0x79AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA5Cu;
label_79aa5c:
    // 0x79aa5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79AA5Cu;
    {
        const bool branch_taken_0x79aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA5Cu;
        // 0x79aa60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa5c) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA64u;
label_79aa64:
    // 0x79aa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa68: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AA70u;
    {
        const bool branch_taken_0x79aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa70) {
            ctx->pc = 0x79AA88u;
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa7c: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79AA7Cu;
    SET_GPR_U32(ctx, 31, 0x79AA84u);
    ctx->pc = 0x79AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA7Cu;
    // 0x79aa80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79AA7Cu, 0x79AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA84u;
label_79aa84:
    // 0x79aa84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79aa84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79aa88:
    // 0x79aa88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79aa88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aa8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa90: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79aa94: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79aa98: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA98u;
        // 0x79aa9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAA0u;
}
} // namespace gh_r608
