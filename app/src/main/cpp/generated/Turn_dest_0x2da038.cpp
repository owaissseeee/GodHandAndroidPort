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

// Function: Turn_dest
// Address: 0x2da038 - 0x2da1f8
void Turn_dest_0x2da038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dest_0x2da038");
#endif

    switch (ctx->pc) {
        case 0x2da0bcu: goto label_2da0bc;
        default: break;
    }

    ctx->pc = 0x2da038u;

    // 0x2da038: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2da038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da03c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da040: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2da040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da044: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2da044u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2da048: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2da048u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2da04c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2da04cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2da050: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2da050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2da054: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2da054u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2da058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da05c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2da05cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2da060: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2da060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2da064: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2da064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2da068: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2da068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da06c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2da06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da070: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x2da070u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da074: 0x0  nop
    ctx->pc = 0x2da074u;
    // NOP
    // 0x2da078: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA078u;
    {
        const bool branch_taken_0x2da078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA078u;
        // 0x2da07c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da078) {
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA080u;
    // 0x2da080: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x2da080u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da084: 0x0  nop
    ctx->pc = 0x2da084u;
    // NOP
    // 0x2da088: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x2DA088u;
    {
        const bool branch_taken_0x2da088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA088u;
        // 0x2da08c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da088) {
            ctx->pc = 0x2DA1DCu;
            goto label_2da1dc;
        }
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2da090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2da094: 0x0  nop
    ctx->pc = 0x2da094u;
    // NOP
    // 0x2da098: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2da098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da09c: 0x0  nop
    ctx->pc = 0x2da09cu;
    // NOP
    // 0x2da0a0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA0A0u;
    {
        const bool branch_taken_0x2da0a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da0a0) {
            ctx->pc = 0x2DA0E0u;
            goto label_2da0e0;
        }
    }
    ctx->pc = 0x2DA0A8u;
    // 0x2da0a8: 0x0  nop
    ctx->pc = 0x2da0a8u;
    // NOP
    // 0x2da0ac: 0x0  nop
    ctx->pc = 0x2da0acu;
    // NOP
    // 0x2da0b0: 0x46141303  div.s       $f12, $f2, $f20
    ctx->pc = 0x2da0b0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[20]);
    // 0x2da0b4: 0xc0e8592  jal         func_3A1648
    ctx->pc = 0x2DA0B4u;
    SET_GPR_U32(ctx, 31, 0x2DA0BCu);
    ctx->pc = 0x3A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1648u, 0x2DA0B4u, 0x2DA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0BCu;
label_2da0bc:
    // 0x2da0bc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2da0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da0c0: 0x0  nop
    ctx->pc = 0x2da0c0u;
    // NOP
    // 0x2da0c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA0C4u;
    {
        const bool branch_taken_0x2da0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0C4u;
        // 0x2da0c8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0c4) {
            ctx->pc = 0x2DA104u;
            goto label_2da104;
        }
    }
    ctx->pc = 0x2DA0CCu;
    // 0x2da0cc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da0d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da0d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA0D8u;
    {
        const bool branch_taken_0x2da0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D8u;
        // 0x2da0dc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0d8) {
            ctx->pc = 0x2DA104u;
            goto label_2da104;
        }
    }
    ctx->pc = 0x2DA0E0u;
label_2da0e0:
    // 0x2da0e0: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x2da0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da0e4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da0e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da0ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da0f0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA0F0u;
    {
        const bool branch_taken_0x2da0f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da0f0) {
            ctx->pc = 0x2DA0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA0F0u;
            // 0x2da0f4: 0x46170b01  sub.s       $f12, $f1, $f23 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA10Cu;
            goto label_2da10c;
        }
    }
    ctx->pc = 0x2DA0F8u;
    // 0x2da0f8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da0fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da0fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da104:
    // 0x2da104: 0x0  nop
    ctx->pc = 0x2da104u;
    // NOP
    // 0x2da108: 0x46170b01  sub.s       $f12, $f1, $f23
    ctx->pc = 0x2da108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_2da10c:
    // 0x2da10c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da110: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da118: 0x0  nop
    ctx->pc = 0x2da118u;
    // NOP
    // 0x2da11c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da120: 0x0  nop
    ctx->pc = 0x2da120u;
    // NOP
    // 0x2da124: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA124u;
    {
        const bool branch_taken_0x2da124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da124) {
            ctx->pc = 0x2DA140u;
            goto label_2da140;
        }
    }
    ctx->pc = 0x2DA12Cu;
    // 0x2da12c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da130: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da138: 0x0  nop
    ctx->pc = 0x2da138u;
    // NOP
    // 0x2da13c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2da13cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2da140:
    // 0x2da140: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da144: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da14c: 0x0  nop
    ctx->pc = 0x2da14cu;
    // NOP
    // 0x2da150: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da154: 0x0  nop
    ctx->pc = 0x2da154u;
    // NOP
    // 0x2da158: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA158u;
    {
        const bool branch_taken_0x2da158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da158) {
            ctx->pc = 0x2DA174u;
            goto label_2da174;
        }
    }
    ctx->pc = 0x2DA160u;
    // 0x2da160: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da164: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da16c: 0x0  nop
    ctx->pc = 0x2da16cu;
    // NOP
    // 0x2da170: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2da170u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2da174:
    // 0x2da174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da178: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2da178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2da17c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da180: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da184: 0x0  nop
    ctx->pc = 0x2da184u;
    // NOP
    // 0x2da188: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA188u;
    {
        const bool branch_taken_0x2da188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da188) {
            ctx->pc = 0x2DA18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA188u;
            // 0x2da18c: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA1ACu;
            goto label_2da1ac;
        }
    }
    ctx->pc = 0x2DA190u;
    // 0x2da190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da198: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA198u;
    {
        const bool branch_taken_0x2da198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da198) {
            ctx->pc = 0x2DA19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA198u;
            // 0x2da19c: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA1ACu;
            goto label_2da1ac;
        }
    }
    ctx->pc = 0x2DA1A0u;
    // 0x2da1a0: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x2da1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da1a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA1A4u;
    {
        const bool branch_taken_0x2da1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da1a4) {
            ctx->pc = 0x2DA1B0u;
            goto label_2da1b0;
        }
    }
    ctx->pc = 0x2DA1ACu;
label_2da1ac:
    // 0x2da1ac: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2da1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da1b0:
    // 0x2da1b0: 0x0  nop
    ctx->pc = 0x2da1b0u;
    // NOP
    // 0x2da1b4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA1B4u;
    {
        const bool branch_taken_0x2da1b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1B4u;
        // 0x2da1b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1b4) {
            ctx->pc = 0x2DA1D8u;
            goto label_2da1d8;
        }
    }
    ctx->pc = 0x2DA1BCu;
    // 0x2da1bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da1c0: 0x0  nop
    ctx->pc = 0x2da1c0u;
    // NOP
    // 0x2da1c4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da1c8: 0x0  nop
    ctx->pc = 0x2da1c8u;
    // NOP
    // 0x2da1cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA1CCu;
    {
        const bool branch_taken_0x2da1cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1CCu;
        // 0x2da1d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1cc) {
            ctx->pc = 0x2DA1D8u;
            goto label_2da1d8;
        }
    }
    ctx->pc = 0x2DA1D4u;
    // 0x2da1d4: 0x46006347  neg.s       $f13, $f12
    ctx->pc = 0x2da1d4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[12]);
label_2da1d8:
    // 0x2da1d8: 0x46016802  mul.s       $f0, $f13, $f1
    ctx->pc = 0x2da1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_2da1dc:
    // 0x2da1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da1e0: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2da1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2da1e4: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2da1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da1e8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2da1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da1ec: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2da1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1F0u;
        // 0x2da1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA1F8u;
}
