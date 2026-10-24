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

// Function: func_003851C0
// Address: 0x3851c0 - 0x385308
void func_003851C0_0x3851c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003851C0_0x3851c0");
#endif

    switch (ctx->pc) {
        case 0x385258u: goto label_385258;
        case 0x3852f0u: goto label_3852f0;
        default: break;
    }

    ctx->pc = 0x3851c0u;

    // 0x3851c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3851c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3851c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3851c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3851c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3851c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3851cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3851ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3851d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3851d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3851d4: 0x24900470  addiu       $s0, $a0, 0x470
    ctx->pc = 0x3851d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    // 0x3851d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3851d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3851dc: 0x24910484  addiu       $s1, $a0, 0x484
    ctx->pc = 0x3851dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x3851e0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x3851e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x3851e4: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x3851e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3851e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3851e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3851ec: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3851ECu;
    {
        const bool branch_taken_0x3851ec = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3851F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851ECu;
        // 0x3851f0: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851ec) {
            ctx->pc = 0x385220u;
            goto label_385220;
        }
    }
    ctx->pc = 0x3851F4u;
    // 0x3851f4: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x3851f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3851f8: 0x24e3fc40  addiu       $v1, $a3, -0x3C0
    ctx->pc = 0x3851f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966336));
    // 0x3851fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3851fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x385200: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385200u;
    {
        const bool branch_taken_0x385200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385200u;
        // 0x385204: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385200) {
            ctx->pc = 0x385214u;
            goto label_385214;
        }
    }
    ctx->pc = 0x385208u;
    // 0x385208: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x385208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x38520c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38520Cu;
    {
        const bool branch_taken_0x38520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38520Cu;
        // 0x385210: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38520c) {
            ctx->pc = 0x385250u;
            goto label_385250;
        }
    }
    ctx->pc = 0x385214u;
label_385214:
    // 0x385214: 0x2402fc40  addiu       $v0, $zero, -0x3C0
    ctx->pc = 0x385214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x385218: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x385218u;
    {
        const bool branch_taken_0x385218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385218u;
        // 0x38521c: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385218) {
            ctx->pc = 0x385250u;
            goto label_385250;
        }
    }
    ctx->pc = 0x385220u;
label_385220:
    // 0x385220: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x385224: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x385224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x385228: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x385228u;
    {
        const bool branch_taken_0x385228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385228u;
        // 0x38522c: 0x71023  negu        $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385228) {
            ctx->pc = 0x385260u;
            goto label_385260;
        }
    }
    ctx->pc = 0x385230u;
    // 0x385230: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x385230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x385234: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x385234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x385238: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385238u;
    {
        const bool branch_taken_0x385238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385238u;
        // 0x38523c: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385238) {
            ctx->pc = 0x38524Cu;
            goto label_38524c;
        }
    }
    ctx->pc = 0x385240u;
    // 0x385240: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x385240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x385244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x385244u;
    {
        const bool branch_taken_0x385244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385244u;
        // 0x385248: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385244) {
            ctx->pc = 0x385250u;
            goto label_385250;
        }
    }
    ctx->pc = 0x38524Cu;
label_38524c:
    // 0x38524c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x38524cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_385250:
    // 0x385250: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x385250u;
    SET_GPR_U32(ctx, 31, 0x385258u);
    ctx->pc = 0x385254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385250u;
    // 0x385254: 0x86050004  lh          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x385250u, 0x385258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385258u;
label_385258:
    // 0x385258: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x385258u;
    {
        const bool branch_taken_0x385258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385258u;
        // 0x38525c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385258) {
            ctx->pc = 0x3852DCu;
            goto label_3852dc;
        }
    }
    ctx->pc = 0x385260u;
label_385260:
    // 0x385260: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x385260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x385264: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x385264u;
    {
        const bool branch_taken_0x385264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385264u;
        // 0x385268: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385264) {
            ctx->pc = 0x385290u;
            goto label_385290;
        }
    }
    ctx->pc = 0x38526Cu;
    // 0x38526c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x38526cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x385270: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x385270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x385274: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385274u;
    {
        const bool branch_taken_0x385274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385274u;
        // 0x385278: 0x96030006  lhu         $v1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385274) {
            ctx->pc = 0x385288u;
            goto label_385288;
        }
    }
    ctx->pc = 0x38527Cu;
    // 0x38527c: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x38527cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x385280: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x385280u;
    {
        const bool branch_taken_0x385280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385280u;
        // 0x385284: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385280) {
            ctx->pc = 0x3852C0u;
            goto label_3852c0;
        }
    }
    ctx->pc = 0x385288u;
label_385288:
    // 0x385288: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x385288u;
    {
        const bool branch_taken_0x385288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385288u;
        // 0x38528c: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385288) {
            ctx->pc = 0x3852C0u;
            goto label_3852c0;
        }
    }
    ctx->pc = 0x385290u;
label_385290:
    // 0x385290: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x385290u;
    {
        const bool branch_taken_0x385290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385290) {
            ctx->pc = 0x385294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385290u;
            // 0x385294: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3852F4u;
            goto label_3852f4;
        }
    }
    ctx->pc = 0x385298u;
    // 0x385298: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x385298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x38529c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x38529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3852a0: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x3852a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3852a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3852a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3852a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3852A8u;
    {
        const bool branch_taken_0x3852a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3852ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852A8u;
        // 0x3852ac: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3852a8) {
            ctx->pc = 0x3852BCu;
            goto label_3852bc;
        }
    }
    ctx->pc = 0x3852B0u;
    // 0x3852b0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3852b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3852b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3852B4u;
    {
        const bool branch_taken_0x3852b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3852B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852B4u;
        // 0x3852b8: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3852b4) {
            ctx->pc = 0x3852C0u;
            goto label_3852c0;
        }
    }
    ctx->pc = 0x3852BCu;
label_3852bc:
    // 0x3852bc: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x3852bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
label_3852c0:
    // 0x3852c0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3852c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3852c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3852c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3852c8: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x3852c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x3852cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3852ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3852d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3852d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3852d4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3852d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3852d8: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x3852d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
label_3852dc:
    // 0x3852dc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3852dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3852e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3852E0u;
    {
        const bool branch_taken_0x3852e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3852e0) {
            ctx->pc = 0x3852E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3852E0u;
            // 0x3852e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3852F4u;
            goto label_3852f4;
        }
    }
    ctx->pc = 0x3852E8u;
    // 0x3852e8: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x3852E8u;
    SET_GPR_U32(ctx, 31, 0x3852F0u);
    ctx->pc = 0x3852ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3852E8u;
    // 0x3852ec: 0x86050004  lh          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x3852E8u, 0x3852F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3852F0u;
label_3852f0:
    // 0x3852f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3852f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3852f4:
    // 0x3852f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3852f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3852f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3852f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3852fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3852FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852FCu;
        // 0x385300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385304u;
    // 0x385304: 0x0  nop
    ctx->pc = 0x385304u;
    // NOP
    ctx->pc = 0x385308u;
}
