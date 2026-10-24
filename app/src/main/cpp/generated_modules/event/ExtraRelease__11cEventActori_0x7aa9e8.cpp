#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: ExtraRelease__11cEventActori
// Address: 0x7aa9e8 - 0x7aabe0
void ExtraRelease__11cEventActori_0x7aa9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtraRelease__11cEventActori_0x7aa9e8");
#endif

    switch (ctx->pc) {
        case 0x7aaac4u: goto label_7aaac4;
        case 0x7aab0cu: goto label_7aab0c;
        case 0x7aab68u: goto label_7aab68;
        case 0x7aab88u: goto label_7aab88;
        case 0x7aabacu: goto label_7aabac;
        case 0x7aabc8u: goto label_7aabc8;
        default: break;
    }

    ctx->pc = 0x7aa9e8u;

    // 0x7aa9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7aa9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7aa9ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7aa9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7aa9f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7aa9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7aa9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7aa9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7aa9f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7aa9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7aa9fc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x7aa9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7aaa00: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7aaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7aaa04: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7aaa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7aaa08: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x7aaa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x7aaa0c: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x7aaa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x7aaa10: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x7aaa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7aaa14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7aaa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aaa18: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7AAA18u;
    {
        const bool branch_taken_0x7aaa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x7AAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA18u;
        // 0x7aaa1c: 0x28620601  slti        $v0, $v1, 0x601 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1537) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa18) {
            ctx->pc = 0x7AAAACu;
            goto label_7aaaac;
        }
    }
    ctx->pc = 0x7AAA20u;
    // 0x7aaa20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AAA20u;
    {
        const bool branch_taken_0x7aaa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA20u;
        // 0x7aaa24: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa20) {
            ctx->pc = 0x7AAA64u;
            goto label_7aaa64;
        }
    }
    ctx->pc = 0x7AAA28u;
    // 0x7aaa28: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x7AAA28u;
    {
        const bool branch_taken_0x7aaa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA28u;
        // 0x7aaa2c: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa28) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAA30u;
    // 0x7aaa30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AAA30u;
    {
        const bool branch_taken_0x7aaa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA30u;
        // 0x7aaa34: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa30) {
            ctx->pc = 0x7AAA48u;
            goto label_7aaa48;
        }
    }
    ctx->pc = 0x7AAA38u;
    // 0x7aaa38: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7AAA38u;
    {
        const bool branch_taken_0x7aaa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA38u;
        // 0x7aaa3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa38) {
            ctx->pc = 0x7AAAACu;
            goto label_7aaaac;
        }
    }
    ctx->pc = 0x7AAA40u;
    // 0x7aaa40: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x7AAA40u;
    {
        const bool branch_taken_0x7aaa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA40u;
        // 0x7aaa44: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa40) {
            ctx->pc = 0x7AABD0u;
            goto label_7aabd0;
        }
    }
    ctx->pc = 0x7AAA48u;
label_7aaa48:
    // 0x7aaa48: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x7aaa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x7aaa4c: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x7AAA4Cu;
    {
        const bool branch_taken_0x7aaa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA4Cu;
        // 0x7aaa50: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa4c) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAA54u;
    // 0x7aaa54: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x7AAA54u;
    {
        const bool branch_taken_0x7aaa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA54u;
        // 0x7aaa58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa54) {
            ctx->pc = 0x7AABB4u;
            goto label_7aabb4;
        }
    }
    ctx->pc = 0x7AAA5Cu;
    // 0x7aaa5c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x7AAA5Cu;
    {
        const bool branch_taken_0x7aaa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA5Cu;
        // 0x7aaa60: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa5c) {
            ctx->pc = 0x7AABD0u;
            goto label_7aabd0;
        }
    }
    ctx->pc = 0x7AAA64u;
label_7aaa64:
    // 0x7aaa64: 0x24020615  addiu       $v0, $zero, 0x615
    ctx->pc = 0x7aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
    // 0x7aaa68: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x7AAA68u;
    {
        const bool branch_taken_0x7aaa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA68u;
        // 0x7aaa6c: 0x28620616  slti        $v0, $v1, 0x616 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1558) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa68) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAA70u;
    // 0x7aaa70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AAA70u;
    {
        const bool branch_taken_0x7aaa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA70u;
        // 0x7aaa74: 0x24020605  addiu       $v0, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa70) {
            ctx->pc = 0x7AAA90u;
            goto label_7aaa90;
        }
    }
    ctx->pc = 0x7AAA78u;
    // 0x7aaa78: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x7AAA78u;
    {
        const bool branch_taken_0x7aaa78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA78u;
        // 0x7aaa7c: 0x2402060a  addiu       $v0, $zero, 0x60A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa78) {
            ctx->pc = 0x7AAB70u;
            goto label_7aab70;
        }
    }
    ctx->pc = 0x7AAA80u;
    // 0x7aaa80: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x7AAA80u;
    {
        const bool branch_taken_0x7aaa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA80u;
        // 0x7aaa84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa80) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAA88u;
    // 0x7aaa88: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x7AAA88u;
    {
        const bool branch_taken_0x7aaa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA88u;
        // 0x7aaa8c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa88) {
            ctx->pc = 0x7AABD0u;
            goto label_7aabd0;
        }
    }
    ctx->pc = 0x7AAA90u;
label_7aaa90:
    // 0x7aaa90: 0x2402061a  addiu       $v0, $zero, 0x61A
    ctx->pc = 0x7aaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1562));
    // 0x7aaa94: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x7AAA94u;
    {
        const bool branch_taken_0x7aaa94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA94u;
        // 0x7aaa98: 0x24020625  addiu       $v0, $zero, 0x625 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa94) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAA9Cu;
    // 0x7aaa9c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x7AAA9Cu;
    {
        const bool branch_taken_0x7aaa9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAA9Cu;
        // 0x7aaaa0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaa9c) {
            ctx->pc = 0x7AAB98u;
            goto label_7aab98;
        }
    }
    ctx->pc = 0x7AAAA4u;
    // 0x7aaaa4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x7AAAA4u;
    {
        const bool branch_taken_0x7aaaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAAA4u;
        // 0x7aaaa8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaaa4) {
            ctx->pc = 0x7AABD0u;
            goto label_7aabd0;
        }
    }
    ctx->pc = 0x7AAAACu;
label_7aaaac:
    // 0x7aaaac: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x7aaaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7aaab0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AAAB0u;
    {
        const bool branch_taken_0x7aaab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAAB0u;
        // 0x7aaab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaab0) {
            ctx->pc = 0x7AAAE4u;
            goto label_7aaae4;
        }
    }
    ctx->pc = 0x7AAAB8u;
    // 0x7aaab8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x7aaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x7aaabc: 0xc0403b6  jal         func_100ED8
    ctx->pc = 0x7AAABCu;
    SET_GPR_U32(ctx, 31, 0x7AAAC4u);
    ctx->pc = 0x7AAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAABCu;
    // 0x7aaac0: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7AAABCu, 0x7AAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAAC4u;
label_7aaac4:
    // 0x7aaac4: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x7aaac8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x7aaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x7aaacc: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x7aaaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x7aaad0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7aaad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7aaad4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aaad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7aaad8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7aaad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7aaadc: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aaadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x7aaae0: 0xae040250  sw          $a0, 0x250($s0)
    ctx->pc = 0x7aaae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
label_7aaae4:
    // 0x7aaae4: 0x8e30003c  lw          $s0, 0x3C($s1)
    ctx->pc = 0x7aaae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x7aaae8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x7AAAE8u;
    {
        const bool branch_taken_0x7aaae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAAE8u;
        // 0x7aaaec: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaae8) {
            ctx->pc = 0x7AABC8u;
            goto label_7aabc8;
        }
    }
    ctx->pc = 0x7AAAF0u;
    // 0x7aaaf0: 0x3c013d40  lui         $at, 0x3D40
    ctx->pc = 0x7aaaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15680 << 16));
    // 0x7aaaf4: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x7aaaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x7aaaf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aaaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aaafc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x7aaafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x7aab00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7aab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7aab04: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7AAB04u;
    SET_GPR_U32(ctx, 31, 0x7AAB0Cu);
    ctx->pc = 0x7AAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAB04u;
    // 0x7aab08: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7AAB04u, 0x7AAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAB0Cu;
label_7aab0c:
    // 0x7aab0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7aab0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aab10: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x7aab10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x7aab14: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x7aab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
    // 0x7aab18: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x7aab18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x7aab1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aab20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AAB20u;
    {
        const bool branch_taken_0x7aab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAB20u;
        // 0x7aab24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aab20) {
            ctx->pc = 0x7AAB3Cu;
            goto label_7aab3c;
        }
    }
    ctx->pc = 0x7AAB28u;
    // 0x7aab28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AAB28u;
    {
        const bool branch_taken_0x7aab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aab28) {
            ctx->pc = 0x7AAB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AAB28u;
            // 0x7aab2c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AAB44u;
            goto label_7aab44;
        }
    }
    ctx->pc = 0x7AAB30u;
    // 0x7aab30: 0x3c01be1e  lui         $at, 0xBE1E
    ctx->pc = 0x7aab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48670 << 16));
    // 0x7aab34: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x7aab34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x7aab38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aab38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7aab3c:
    // 0x7aab3c: 0x0  nop
    ctx->pc = 0x7aab3cu;
    // NOP
    // 0x7aab40: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7aab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7aab44:
    // 0x7aab44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7aab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x7aab48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aab4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7aab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x7aab50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7aab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7aab54: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7aab58: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7aab58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aab5c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7aab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7aab60: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x7AAB60u;
    SET_GPR_U32(ctx, 31, 0x7AAB68u);
    ctx->pc = 0x7AAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAB60u;
    // 0x7aab64: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x7AAB60u, 0x7AAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAB68u;
label_7aab68:
    // 0x7aab68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7AAB68u;
    {
        const bool branch_taken_0x7aab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAB68u;
        // 0x7aab6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aab68) {
            ctx->pc = 0x7AABCCu;
            goto label_7aabcc;
        }
    }
    ctx->pc = 0x7AAB70u;
label_7aab70:
    // 0x7aab70: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x7aab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7aab74: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7AAB74u;
    {
        const bool branch_taken_0x7aab74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAB74u;
        // 0x7aab78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aab74) {
            ctx->pc = 0x7AABC8u;
            goto label_7aabc8;
        }
    }
    ctx->pc = 0x7AAB7Cu;
    // 0x7aab7c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x7aab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x7aab80: 0xc0403b6  jal         func_100ED8
    ctx->pc = 0x7AAB80u;
    SET_GPR_U32(ctx, 31, 0x7AAB88u);
    ctx->pc = 0x7AAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAB80u;
    // 0x7aab84: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7AAB80u, 0x7AAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAB88u;
label_7aab88:
    // 0x7aab88: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x7aab8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7aab90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AAB90u;
    {
        const bool branch_taken_0x7aab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAB90u;
        // 0x7aab94: 0xae0202f0  sw          $v0, 0x2F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aab90) {
            ctx->pc = 0x7AABC8u;
            goto label_7aabc8;
        }
    }
    ctx->pc = 0x7AAB98u;
label_7aab98:
    // 0x7aab98: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x7aab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7aab9c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x7AAB9Cu;
    {
        const bool branch_taken_0x7aab9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAB9Cu;
        // 0x7aaba0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aab9c) {
            ctx->pc = 0x7AABCCu;
            goto label_7aabcc;
        }
    }
    ctx->pc = 0x7AABA4u;
    // 0x7aaba4: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x7AABA4u;
    SET_GPR_U32(ctx, 31, 0x7AABACu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x7AABA4u, 0x7AABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AABACu;
label_7aabac:
    // 0x7aabac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7AABACu;
    {
        const bool branch_taken_0x7aabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AABACu;
        // 0x7aabb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aabac) {
            ctx->pc = 0x7AABCCu;
            goto label_7aabcc;
        }
    }
    ctx->pc = 0x7AABB4u;
label_7aabb4:
    // 0x7aabb4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x7aabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x7aabb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AABB8u;
    {
        const bool branch_taken_0x7aabb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AABB8u;
        // 0x7aabbc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aabb8) {
            ctx->pc = 0x7AABD0u;
            goto label_7aabd0;
        }
    }
    ctx->pc = 0x7AABC0u;
    // 0x7aabc0: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x7AABC0u;
    SET_GPR_U32(ctx, 31, 0x7AABC8u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x7AABC0u, 0x7AABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AABC8u;
label_7aabc8:
    // 0x7aabc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7aabc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7aabcc:
    // 0x7aabcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7aabccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7aabd0:
    // 0x7aabd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7aabd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aabd4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AABD4u;
        // 0x7aabd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AABD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AABDCu;
    // 0x7aabdc: 0x0  nop
    ctx->pc = 0x7aabdcu;
    // NOP
    ctx->pc = 0x7aabe0u;
}
} // namespace gh_event
